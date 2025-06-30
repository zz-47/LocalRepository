from secrets import token_hex
import secrets
from flask import Flask, request
import json
from datetime import date


app = Flask(__name__)


@app.route("/")
def helloworld():
    return f'Hello World'

#creating a register app route...

@app.route("/register", methods= ['POST'])
def register():
    print("Trying to register ...")
    request_json =  request.get_json();   # used to parse the body(given parameters) of Http request as JSON 
    
    username = request_json.get('user');   # accessing value user from the json using get.json 

    password = request_json.get('password') #accessing value of password from json
    return handle_register(username, password);

# creating a login app route...
@app.route("/login", methods= ['POST'])
def login():
    print("Trying to login ...")
    request_json =  request.get_json();   # used to parse the body(given parameters) of Http request as JSON 
    
    username = request_json.get('user');   # accessing value user from the json using get.json 

    password = request_json.get('password') #accessing value of password from json
    return check_login(username, password);

    print(f' Recieved Username : {username} and Password : {password}')
    return f'Logged in'

def check_login(username, password):


      # specifying the file read whole content option

    with open('user.json') as filename: json_string = filename.read()

      # loading json database file contents

    user_db = json.loads(json_string)

    if user_exists(user_db, username):
       user_properties = user_db[username]
       
       if user_properties['password'] == password :


         print(f'Login Successful for user: {username}')
         return generate_and_store_token(username)      # creation a unique 128-bit  token and storing with user name in database.
     
       else:
          return 'Login Failed , Wrong Password ! ',401 
    else:
     print(f'Login Failed for user: {username} , the given user does not exist ...')
    return 'Failed to login !', 401

    # opening the Database .json to store the genrated token.

def  get_user_db():
   
    with open('user.json') as filename: json_string = filename.read()

    return json.loads(json_string)

    #  writing the token in databse with specified user


def write_user_db(user_db):
    
    user_db_json = json.dumps(user_db, indent=4)    # specifying the method to dumb the new contents in .json file / using indents to prettyup the DB. 

    # used to append / add the token to pre-existing database

    with open("user.json", "w") as f:    # specify "w" for writing and "a" to append
       
       f.write(user_db_json)

    return

def user_exists(user_db, username):
     
      # setting up try operation for fetching properties using username
     
     try:
      user_properties = user_db[username]
      return user_properties
     except:
      return False
     

def generate_and_store_token(username):

 access_token = secrets.token_hex(16)

    # to store the token in user Database.

 user_db = get_user_db()
   
   #  we know th user name exists , this method is only called when a token is generate using valid info(username and password)
 user_properties = user_db[username]    # specifiying the user to append/write the token with
 user_properties['access_token'] = access_token        # appending the token .

 user_db[username] = user_properties
 write_user_db(user_db)          # writting the token .
 return access_token 

# used to access and add a new person's records...
def handle_register(username, password):
   user_db = get_user_db()
    # used to prevent overiding of usernames ...
   if user_exists(user_db, username):
    return "User Already Exists, Please Login ... ",401
   user_properties_dict = {
      "password": password, 
      "creationtime": str(date.today())
        }
   user_db.update({username: user_properties_dict})   
   write_user_db(user_db)
   return f'Successfully registered user {username}'    # to show that the user is successfully registered...