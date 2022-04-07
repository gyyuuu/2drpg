#include <iostream>
#include "../header/GameSystem.hpp"

GameSystem::GameSystem() {
    sample_map = new SampleMap();
    //sample_character = new SampleCharacter(sample_map);
}

GameSystem::~GameSystem() {
}

void GameSystem::GameCreate() {
    const static int map_ysize = 10;
    const static int map_xsize = 10;
    for (int32_t y = 0; y < map_ysize ; y++) {
        for (int32_t x = 0; x < map_xsize; x++) {
            sample_map->DrawMap(x,y);
//          sample_character->ShowStatus();
            //std::cout << std::endl;
        }
        std::cout << std::endl;
    }
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
