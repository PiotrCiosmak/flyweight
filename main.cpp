#include "include/Forest.hpp"

int main()
{
    Forest forest;
    forest.plantTree(0, 0, "Oak", "Green", "Smooth");
    forest.plantTree(10, 5, "Pine", "Brown", "Rough");
    forest.plantTree(20, 10, "Maple", "Red", "Textured");
    forest.draw(1);
}
