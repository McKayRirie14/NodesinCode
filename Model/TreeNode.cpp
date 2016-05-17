//
//  TreeNode.cpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 4/11/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#include "TreeNode.h"

using namespace CTECData;

template<class Type>
TreeNode<Type> :: TreeNode() : Node<Type>()
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
}

template<class Type>
TreeNode<Type> :: TreeNode(const Type& value) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = nullptr;
    this->setValue(value);
}

template<class Type>
TreeNode<Type> :: TreeNode(const Type& value, TreeNode<Type> * parent) : Node<Type>(value)
{
    this->leftChild = nullptr;
    this->rightChild = nullptr;
    this->parent = parent;
}

template<class Type>
TreeNode<Type> *  TreeNode<Type>::getLeftChild()
{
    return getLeftChild;
}

template<class Type>
void TreeNode<Type>::setLeftChild(TreeNode<Type> * leftChild)
{
    return setLeftChild;
}

template<class Type>
TreeNode<Type> * TreeNode<Type>::getRightChild()
{
    return getRightChild;
}

template<class Type>
void TreeNode<Type>::setRightChild(TreeNode<Type> * rightChild)
{
    return setRightChild;
}

template<class Type>
TreeNode<Type> * TreeNode<Type>::getParent()
{
    return getParent;
}

template<class Type>
void TreeNode<Type>:: setParent(TreeNode<Type> * parent)
{
    return setParent;
}
