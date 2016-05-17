//
//  TreeNode.cpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "Node.h"
#ifndef TreeNode_h
#define TreeNode_h

namespace CTECData
{
    template <class Type>
    class TreeNode : public Node<Type>
    {
    private:
        TreeNode<Type> * leftChild;
        TreeNode<Type> * rightChild;
        TreeNode<Type> * parent;
    public:
        TreeNode();
        TreeNode(const Type& value);
        TreeNode(const Type& value, TreeNode<Type> * parent);
        
        void setLeftChild(TreeNode<Type> * leftChild);
        void setRightChild(TreeNode<Type> * rightChild);
        void setParent(TreeNode<Type> * parent);
        
        TreeNode<Type> * getParent();
        TreeNode<Type> * getLeftChild();
        TreeNode<Type> * getRightChild();
    };
}

#endif /* TreeNode_h */