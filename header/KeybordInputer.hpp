#pragma once
#include "InputInterface.hpp"
#include "MapTable.hpp"

class KeybordInputer: public InputInterface 
{
public:
    KeybordInputer(){};
    ~KeybordInputer(){};

    void Input(celllist celllist) const override;
};
