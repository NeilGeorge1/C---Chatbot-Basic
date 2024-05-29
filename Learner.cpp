#include <iostream>
#include <fstream>
#include <string>
#include "Learner.h"
#include "Voice.h"

using namespace std;

void Learner::respond(string phrase){
    fstream memory;
    memory.open("memory/memory.txt", ios::in);

    while(!memory.eof()){
        string identifier;
        getline(memory, identifier);
        if(identifier == phrase){
            string response;
            getline(memory, response);
            voice.say(response);
            return;
        }
    }

    #include "Voice.h"

    memory.close();
    memory.open("memory/memory.txt", ios::in | ios::app);
    memory << phrase << endl;

    voice.say(phrase);
    string userInput;
    cout << "You ";
    getline(cin, userInput);
    memory << userInput << endl;
    memory.close();
}

void Learner::say(string phrase){
    this->voice.say(phrase);
    // just used to print out the phrase
}
