//
//  CtecBinaryTree.hpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef CtecBinaryTree_hpp
#define CtecBinaryTree_hpp

#include <stdio.h>
namespace CTECData
{
template <class Type>
class CTECBinaryTree
{
private:
    TreeNode<Type> * root;
    int height;
    bool balancd;
    boolcontains(Type value, CTECBinaryTree<Type> * currentTree);
public:
    CTECBinaryTree();
    ~CTECBinaryTree();
    bool insert(const Type& value);
    bool contains(Type value);
    Type remove(const Type& value);
    int getHeight();
    bool isBalanced();
    TreeNode<Type> * getRoot();
};
}

#endif /* CtecBinaryTree_hpp */
