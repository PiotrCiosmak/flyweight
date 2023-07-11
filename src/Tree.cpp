#include "../include/Tree.hpp"

Tree::Tree(int new_x, int new_y, const std::shared_ptr<TreeType>& new_tree_type)
        : x{new_x},
          y{new_y},
          tree_type{new_tree_type}
{}

void Tree::draw(int canvas)
{
    tree_type->draw(canvas, x, y);
}
