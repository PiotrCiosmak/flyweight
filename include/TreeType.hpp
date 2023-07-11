#pragma once

#include <string>
#include <iostream>

class TreeType
{
public:
    TreeType(std::string new_name, std::string new_color, std::string new_texture);
    void draw(int canvas, int x, int y);

private:
    std::string name;
    std::string color;
    std::string texture;
};
