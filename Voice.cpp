#include <iostream>
#include <fstream>
#include <string>
#include "Voice.h"

using namespace std;

void Voice::say(string phrase){
    //string command = "espeak \"" + phrase + "\"";
    //const char* charCommand = command.c_str();
    cout << phrase << endl;
    //system(charCommand);
}