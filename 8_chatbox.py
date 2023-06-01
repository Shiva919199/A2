import random

# cook your dish here
print("BOT: What do you want me to call you?")
user_name = input()

bot_template = "BOT : {0}"
user_template = user_name + " : {0}"

name = "Movie bot" 
actor = ["Aamir Khan","Emraan Hashmi", "Tom Cruise"]


responses = { 
"what's your name?": [ 
"They call me {0}".format(name), 
"I usually go by {0}".format(name), 
"My name is the {0}".format(name) ],

"who is your favourite actor?": [ 
"I like {0}".format(actor[0]), 
"It's {0}".format(actor[1]), 
"I likes movies of {0}".format(actor[2]) ],

"are you a robot?": [ 
"What do you think?", 
"Maybe yes, maybe no!", 
"Yes, I am a robot with human feelings.", ],

"do you have collection of movies?": [ 
"Yes, I have collection.", 
"No. I don't have collection of movies." , 
"I know your nature. If i gave you, you will waste your time. So i won't give to you.", ],

"": [ 
"Hey! Are you there?", 
"What do you mean by saying nothing?", 
"Sometimes saying nothing tells a lot :)", ],

"default": [
"this is a default message"] }

def respond(message):
    if message in responses: 
        bot_message = random.choice(responses[message])
    else: 
        bot_message = random.choice(responses["default"])
    return bot_message
    
    
def related(x_text): 
    if "name" in x_text: 
        y_text = "what's your name?"
    elif "actor" in x_text: 
        y_text = "who is your favourite actor?"
    elif "robot" in x_text: 
        y_text = "are you a robot?"
    elif "collection" in x_text: 
        y_text = "do you have collection of movies?"
    else: 
        y_text = ""
    return y_text
    
def send_message(message): 
  print(user_template.format(message)) 
  response = respond(message) 
  print(bot_template.format(response))
  
while 1: 
  my_input = input() 
  my_input = my_input.lower() 
  related_text = related(my_input) 
  send_message(related_text)
  if my_input == "exit" or my_input == "stop": 
    break