from flask import Flask, request
from markupsafe import escape


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
    if username == 'zeeshan' and password == 'secretcode':
        print(f'Login Successful for user : {username}')
        return 'https://github.com/zz-47/LocalRepository'
    else:
        print(f'Login Failed for user : {username}')
        return 'Failed to Reach !',401