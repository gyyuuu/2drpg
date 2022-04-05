#include <iostream>
#include "GameSystem.hpp"

GameSystem::GameSystem() {
    sample_map = new SampleMap();
    //sample_character = new SampleCharacter(sample_map);
}

GameSystem::~GameSystem() {
}

void GameSystem::GameCreate() {
    sample_map->Show();
//    sample_character->ShowStatus();
    std::cout << std::endl;
}

void GameSystem::MainLoop() {
    GameCreate();
    GetKeybordInuput();
    while (true)
    {

//       Turn();
//       system("clear");
    }
}

//void GameSystem::Turn() {
    //sample_character->Move();
//}

char GameSystem::GetKeybordInuput() {
    char input;
    std::cout << "どうしますか" << std::endl;
    std::cin >> input;
    return input;
}
