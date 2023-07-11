#pragma once

#include <memory>
#include "TreeType.hpp"

class Tree
{
public:
    Tree(int new_x, int new_y, const std::shared_ptr<TreeType>& new_tree_type);
    void draw(int canvas);

private:
    int x;
    int y;
    std::shared_ptr<TreeType> tree_type;
};
