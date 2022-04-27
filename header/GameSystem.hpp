#pragma once
#include "SampleMap.hpp"
#include "SampleCharacter.hpp"
#include "ConsoleDrawer.hpp"
#include "KeybordInputer.hpp"
#include <iostream>

class GameSystem
{
public:
    GameSystem(/* args */);
    ~GameSystem();
    void GameCreate();
    void MainLoop();
};

