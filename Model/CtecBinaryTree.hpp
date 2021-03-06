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
#include "TreeNode.cpp"

template <class Type>
class CTECBinaryTree
{
private:
    TreeNode<Type> * root;
    int height;
    int size;
    bool balanced;
    bool contains(Type value, TreeNode<Type> * currentTree);  //Done
    void calculateSize(TreeNode<Type> * currentNode);   //Done
    TreeNode<Type> * getRightMostChild(TreeNode<Type> * leftSubTree); //Done
    TreeNode<Type> * getLeftMostChild(TreeNode<Type> * rightSubTree); //Done
    void remove(TreeNode<Type> * nodeToBeDeleted);  //Done
public:
    CTECBinaryTree();   //Done
    ~CTECBinaryTree();  //Done
    bool insert(const Type& value); //Done
    bool contains(Type value);  //Done
    void remove(const Type & value);    //Done
    int getHeight();
    int getSize();  //Done
    bool isBalanced();
    TreeNode<Type> * getRoot();
    void inorderTraversal(TreeNode<Type> * currentNode);    //Done
    void preorderTraversal(TreeNode<Type> * currentNode);   //Done
    void postorderTraversal(TreeNode<Type> * currentNode);  //Done
};

#endif /* CtecBinaryTree_hpp */
