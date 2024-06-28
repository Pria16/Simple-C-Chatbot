#include <iostream>
#include <string>

using namespace std;

string getResponse(const string& input) {
    if (input == "hello" || input == "hi") {
        return "Hello! How can I help you today?";
    } else if (input == "how are you") {
        return "I'm just a bot who is always fine except if any bugs or error occur but I'm here to help you!";
    } else if (input == "what is your name") {
        return "I am a simple chatbot created to assist you.";
    } else if (input == "bye" || input == "goodbye") {
        return "Goodbye! Have a great day!";
    } else if (input == "what can you do") {
        return "I can answer simple questions and have a basic conversation with you.";
    } else if (input == "what is the time") {
        return "I don't have access to the current time. Please check your device for the time.";
    } else if (input == "tell me a joke") {
        return "What did the proton tell the electron? Don't be so negative!";
    } else if (input == "who created you") {
        return "I was created by a developer named priya mahar using C++ programming language.";
    } else if (input == "What you think will AspireNex hire me?") {
        return "Be positive! Everything that you have done would not go in vain.";
    } else {
        return "I'm sorry, I didn't understand that.";
    }
}

int main() {
    string input;
    cout << "Welcome to the chatbot! Type 'bye' to exit." << endl;

    while (true) {
        cout << "You: ";
        getline(cin, input);

        // Convert input to lowercase
        for (auto& c : input) c = tolower(c);

        string response = getResponse(input);
        cout << "Bot: " << response << endl;

        if (input == "bye" || input == "goodbye") {
            break;
        }
    }

    return 0;
}

