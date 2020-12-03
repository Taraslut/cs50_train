from flask import Flask, request, render_template
app = Flask(__name__)

FLASK_DEBUG=1

@app.route('/')
def hello_world():
    return 'Hello, World!'

@app.route('/hello')
@app.route('/hello/<first_name>')
def greeting(first_name=None):
    args = request.args
    if args.get('name'):
        name =  args.get('name')
    else:
        name = ""
    if first_name:
        name = first_name

    return render_template("greeting.html", n=name)