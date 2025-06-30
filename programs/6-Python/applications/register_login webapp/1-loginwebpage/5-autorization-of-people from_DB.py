from flask import Flask, request
import json


app = Flask(__name__)


@app.route("/")
def helloworld():
    return f'Hello World'

@app.route("/login", methods= ['GET','POST'])
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
         return 'https://github.com/zz-47/LocalRepository'
     
       else:
          return 'Login Failed , Wrong Password ! ',401 
    else:
     print(f'Login Failed for user: {username} , the given user does not exist ...')
    return 'Failed to login !', 401
      
def user_exists(user_db, username):
     
      # setting up try operation for fetching properties using username
     
     try:
      user_properties = user_db[username]
      return user_properties
     except:
      return False