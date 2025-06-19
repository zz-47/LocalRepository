from flask import Flask

app = Flask(__name__)

@app.route("/")

def hello_world():
    return "<p>HELLO WORLD, I'm Zeeshan is my first code using flask. I'm trying on my own to develope a web app using flask and my raw knowlegde .</p>"

   # for accessing the content below just write /routname after url.

@app.route("/humble")
def humble_world():
    return "<p>Hey World , I'd like to hide my identity as it can compromise by digital footprint </p>"
