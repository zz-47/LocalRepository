from flask import Flask

app = Flask(__name__)

@app.route("/")

def hello_world():
    return "<p>HELLO WORLD, I'm Zeeshan is my first code using flask. I'm trying on my own to develope a web app using flask and my raw knowlegde .</p>"

   # for accessing the content below just write /routname after url.

@app.route("/humble/<name>")
def humble_world(name):
    return f'<h1>{name}</h1><br></br><p>Hey buddy I\'m a web app designed for educational purposes.</p><br></br><p>Other Information is provided as : </p><ul><li>This page demostrates the author , how flask webapps work.</li><li>This webapp is made using python , HTML and Flask micro framework.</li><li>This is a demostration that python can combine front end and backend using flask.</li></ul>'
