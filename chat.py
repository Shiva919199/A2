'''class Graph:
    def _init_(self, edges, n):
        self.adjList = [[] for _ in range(n)]
        for (src, dest) in edges:
            self.adjList[src].append(dest)
            self.adjList[dest].append(src)
 
def colorGraph(graph, n):
    result = {}
    for u in range(n):
        assigned = set([result.get(i) for i in graph.adjList[u] if i in result])
        color = 1
        for c in assigned:
            if color != c:
                break
            color = color + 1      
        result[u] = color
    for v in range(n):
        print(f'Color assigned to vertex {v} is {colors[result[v]]}')

if _name_ == '_main_':
    colors = ['', 'BLUE', 'GREEN', 'RED', 'YELLOW', 'ORANGE', 'PINK',
            'BLACK', 'BROWN', 'WHITE', 'PURPLE', 'VOILET']
    edges = [(0, 1), (0, 4), (0, 5), (4, 5), (1, 4), (1, 3), (2, 3), (2, 4)]
    n = 6
 
    graph = Graph(edges, n)
     
    colorGraph(graph, n)

'''
# Install Cython by using: pip install cython
# Only then install chatterbot using: pip install chatterbot 

from chatterbot import ChatBot

# Inorder to train our bot, we have to import a trainer package
# "ChatterBotCorpusTrainer"
from chatterbot.trainers import ChatterBotCorpusTrainer

# Give a name to the chatbot “corona bot”
# and assign a trainer component.
chatbot=ChatBot('corona bot')

# Create a new trainer for the chatbot
trainer = ChatterBotCorpusTrainer(chatbot)

# Now let us train our bot with multiple corpus
trainer.train("chatterbot.corpus.english.greetings","chatterbot.corpus.english.conversations" )


question = input("Ask me anything:(Enter Endgame to exit) ")
while question != "Endgame" or question != "endgame":
        response = chatbot.get_response(question)
        print(response)
        question = input("Enter your question:(Enter Endgame to exit) ")
print("Goodbye")