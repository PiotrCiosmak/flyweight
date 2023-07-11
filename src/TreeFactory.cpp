#include "../include/TreeFactory.hpp"

std::map<std::string, std::shared_ptr<TreeType>> TreeFactory::tree_types;

std::shared_ptr<TreeType> TreeFactory::getTreeType(const std::string& name,
                                                   const std::string& color,
                                                   const std::string& texture)
{
    std::string key = name + color + texture;
    auto it = tree_types.find(key);
    if (it != tree_types.end())
    {
        return it->second;
    }
    else
    {
        std::shared_ptr<TreeType> type = std::make_shared<TreeType>(name, color, texture);
        tree_types[key] = type;
        return type;
    }
}
