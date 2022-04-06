#include <iostream>

class IDrawMapInfo
{
protected:
    //static int32_t m_maptable[][]=0;

public:
    IDrawMapInfo(/* args */);
    ~IDrawMapInfo();
    virtual void DrawMap() = 0;
    virtual void DrawCharacter() = 0;
};
