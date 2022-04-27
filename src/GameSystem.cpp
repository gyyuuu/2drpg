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
    KeybordInputer* kebordinputer = new KeybordInputer;
    SampleMap* map = new SampleMap{consoledrawer};
    SampleCharacter* character = new SampleCharacter{consoledrawer, kebordinputer};
    while (true)
    {
        map->Draw();
        refresh();
        character->Move();
    }
    endwin();
    return;
}
