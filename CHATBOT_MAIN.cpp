
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "\nChatBot : Hello! My name is Chatbot. What's your name?" << endl<<"Name : ";
    getline(cin, name);
    
    cout << "\nChatBot : Nice to meet you, " << name << "!\n" << endl;

    string response;
    for (int i = 0; i < 10; i++)
    {
    
        while (true) {
            cout << "ChatBot : How can I assist you?" << endl<<name<<" : ";
            getline(cin, response);
            
            
            if (response == "hello") {
                cout << "\nChatBot : Hello there!\n";
                break;
            }
            else if (response == "hii") {
                cout << "\nChatBot : Hello there!\n";
                break;
            } 
            else if (response == "how are you") {
                cout << "\nChatBot : I'm doing well, thank you for asking!\n";
                break;
            }
            else if (response == "what is your name") {
                cout << "\nChatBot : My name is ChatBot. Nice to meet you!\n";
                break;
            }
            else if (response == "goodbye" || response == "bye") {
                cout << "\nChatBot : Goodbye, " << name << "! Have a great day.\n";
                break;
            }
            if (response == "exit") {
                cout << "Goodbye, " << name << "! It was nice chatting with you." << endl;
                break;
            } 
            else {
                cout << "I'm sorry, I don't understand. Can you please rephrase your question?" << endl;
            }
        }
    }
    return 0;
}
