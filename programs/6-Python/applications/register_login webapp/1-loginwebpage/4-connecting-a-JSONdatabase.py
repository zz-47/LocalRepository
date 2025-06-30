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
  if user_exists(username, password):
        print(f'Login Successful for user: {username}')
        return 'https://github.com/zz-47/LocalRepository'
  else:
        print(f'Login Failed for user: {username}')
        return 'Failed to Reach !', 401
      
def user_exists(username, password):
      
      # specifying the file read whole content option

     with open('user.json') as filename: json_string = filename.read()

      # loading json database file contents

     user_db = json.loads(json_string)
      
     print(user_db)