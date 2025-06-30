from flask import Flask, request
from markupsafe import escape


app = Flask(__name__)


@app.route("/")
def helloworld():
    return f'Hello World'

@app.route("/login", methods= ['GET','POST'])
def login():
     print(request.get_json('user'))
     return f'Logged in'

# terminal output :  {'user': 'zeeshan', 'password': 'secretcode'}  127.0.0.1 - - [20/Jun/2025 04:02:27] "POST /login HTTP/1.1" 200 -