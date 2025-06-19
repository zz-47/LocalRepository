from flask import Flask


    # staging a counter for eacch visit.

visitor_counter = 0;   



app = Flask(__name__)


@app.route("/")

def hello_world():
     #incrementing the value for 1st route... 
    
    global visitor_counter
    visitor_counter += 1

    return f'<h1>Thanks For Your Visit</h1><p>The visitor counter is :{visitor_counter}</p>'

   # for accessing the content below just write /routname after url.

@app.route("/humble/<name>")

def humble_world(name):
     # incrementing the value for 2nd route...
    global visitor_counter   
    visitor_counter +=1

    return f'<h1>{name}</h1><p>You incremented the visitor counter to {visitor_counter}'

@app.route("/reset")

def reset():
    global visitor_counter

     # reseting value to zero.

    visitor_counter =0

    return f'reset visitor counter to {visitor_counter}'