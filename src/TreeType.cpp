#include "../include/TreeType.hpp"

TreeType::TreeType(std::string new_name, std::string new_color, std::string new_texture)
        : name{std::move(new_name)},
          color{std::move(new_color)},
          texture{std::move(new_texture)}
{}

void TreeType::draw(int canvas, int x, int y)
{
    std::cout << "Drawing TreeType: " << name << " Color: " << color << " Texture: " << texture
              << " at (" << x << ", " << y << ")" << std::endl;
}
