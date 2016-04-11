//
//  TreeNode.cpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "Node.h"

template <class Type>
TreeNode<Type> :: TreeNode() : CTECData::Node<Type>()
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
}

template <class Type>
TreeNode<Type> :: TreeNode(const)

#endIf /* TreeNode_h */