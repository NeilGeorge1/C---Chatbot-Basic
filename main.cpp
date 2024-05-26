#include <iostream>
#include "Voice.cpp"
#include "Learner.cpp"

using namespace std;

int main(){
    Learner AI;

    cout << "Ask the AI all the questions you want!!! " << endl;
    cout << "Write stop to end the session" << endl;

    while(true){
        cout << "YOU-> " ;
        string phrase;
        getline(cin, phrase);

        //if(phrase == "stop" || "Stop") break;

        cout << "AI-> ";
        AI.respond(phrase);
    }

    return 0;
}