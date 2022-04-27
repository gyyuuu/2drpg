#include "GameSystem.hpp"
#include <iostream>
#include <memory>
#include <ncurses.h>
GameSystem::GameSystem(){}

GameSystem::~GameSystem(){}

void GameSystem::GameCreate() {
    initscr();
	noecho();
	cbreak();
	keypad(stdscr, TRUE);    
}

void GameSystem::MainLoop() {
    ConsoleDrawer* consoledrawer = new ConsoleDrawer;
    SampleMap* map = new SampleMap{consoledrawer};
    while (true)
    {
        map->Draw();
    }
    endwin();
    return;
}
