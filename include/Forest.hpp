#pragma once

#include <vector>
#include "Tree.hpp"
#include "TreeFactory.hpp"

class Forest
{
public:
    void plantTree(int x,
                   int y,
                   const std::string& name,
                   const std::string& color,
                   const std::string& texture);
    void draw(int canvas);

private:
    std::vector<std::shared_ptr<Tree>> trees;
};
