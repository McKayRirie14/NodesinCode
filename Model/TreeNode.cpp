//
//  TreeNode.cpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.hpp"
#define TreeNode_h

#include "Node.h"

template <class Type>
class TreeNode : public CTECData::Node<Type>
{
private:
    TreeNode<Type> * leftChild;
    TreeNode<Type> * rightChild;
    TreeNode<Type> * parent;
public:
    TreeNode();
    TreeNode(const Type& value);
    TreeNode(const Type& value, TreeNode<Type> * parent);
    voidsetLeftChild(TreeNode<Type>* leftChild);
    voidsetrightChild(TreeNode<Type>* rightChild);
    void setParent(TreeNode<Type>* parent);
    TreeNode<Type> * getLeftChild();
    TreeNode<Type> * getRightChild();
    TreeNode<Type> * getParent();

};


#endIf /* TreeNode_h */