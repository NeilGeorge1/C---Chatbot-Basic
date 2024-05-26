#pragma once

#include <iostream>
#include <fstream>
#include <string>
//#include "Voice.h"

using namespace std;

class Learner{
    public:
    void respond(string phrase);
    void say(string phrase);

    Voice voice;
};