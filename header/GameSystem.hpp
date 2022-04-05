#pragma once
#include <iostream>
#include "SampleMap.hpp"
//#include "SampleCharacter.hpp"

class GameSystem
{
public:
    SampleMap *sample_map; 
    //SampleCharacter *sample_character;
    GameSystem(/* args */);
    ~GameSystem();
    void GameCreate();
    //void Turn();
    void MainLoop();
    static char GetKeybordInuput();
};

