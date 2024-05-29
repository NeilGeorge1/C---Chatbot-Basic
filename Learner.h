#pragma once

#include <iostream>
#include <string>
#include "Voice.h"

using namespace std;

class Learner {
public:
    inline void respond(string phrase);

    inline void say(string phrase);

    Voice voice;
};
