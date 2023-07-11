#include "../include/Forest.hpp"

void Forest::plantTree(int x,
                       int y,
                       const std::string& name,
                       const std::string& color,
                       const std::string& texture)
{
    std::shared_ptr<TreeType> tree_type = TreeFactory::getTreeType(name, color, texture);
    std::shared_ptr<Tree> tree = std::make_shared<Tree>(x, y, tree_type);
    trees.push_back(tree);
}

void Forest::draw(int canvas)
{
    for (const auto& tree: trees)
    {
        tree->draw(canvas);
    }
}
