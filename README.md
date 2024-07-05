# AspireNex
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>  </title>
</head>
<body>
<h1> CHATBOT </h1>
<h2>Simple C++ Chatbot</h2>

<p>This project is a simple chatbot written in C++. The chatbot can respond to basic greetings and questions with predefined responses.</p>

<h2>Features</h2>
<ul>
    <li>Responds to basic greetings like "hello" and "hi".</li>
    <li>Can tell a joke.</li>
    <li>Provides a positive response when asked about hiring possibilities.</li>
    <li>Gives information about its creator.</li>
    <li>Handles unknown inputs gracefully.</li>
</ul>

<h2>Usage</h2>
<ol>
    <li>Clone the repository.</li>
    <li>Compile the code using a C++ compiler (e.g., g++).</li>
    <li>Run the compiled executable.</li>
    <li>Interact with the chatbot by typing messages.</li>
</ol>

<h3>Example:</h3>
<pre>
<code>
$ g++ -o chatbot chatbot.cpp
$ ./chatbot
Welcome to the chatbot! Type 'bye' to exit.
You: hello
Bot: Hello! How can I help you today?
You: what is your name
Bot: I am a simple chatbot created to assist you.
You: bye
Bot: Goodbye! Have a great day!
</code>
</pre>

<h2>Code Overview</h2>
<p>The main function initializes the chatbot and enters a loop where it waits for user input. Based on the input, the chatbot responds with predefined messages.</p>

<h3>getResponse Function</h3>
<p>This function takes a user input string and returns an appropriate response string based on predefined conditions.</p>

<pre>
<code>
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
</code>
</pre>

<h3>Thank You</h3>



</body>
</html>

