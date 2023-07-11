#pragma once

#include <iostream>
#include <map>
#include <memory>
#include "TreeType.hpp"

class TreeFactory
{
public:
    static std::shared_ptr<TreeType> getTreeType(const std::string& name,
                                                 const std::string& color,
                                                 const std::string& texture);

private:
    static std::map<std::string, std::shared_ptr<TreeType>> tree_types;
};
