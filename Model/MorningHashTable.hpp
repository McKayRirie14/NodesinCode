//
//  MorningHashTable.hpp
//  NodesinCode
//
//  Created by Ririe, Mckay on 5/5/16.
//  Copyright © 2016 CTEC. All rights reserved.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "CTECArray.h"
#include "CTECArray.cpp"
#include "HashNode.h"
#include <cmath>

template <class Type>

class HashTable
{
public:
    HashTable();
    ~HashTable();
    void add(HashNode<Type> currentNode);
    
    bool remove(HashNode<Type> currentNode);
    
    bool contains(HashNode<Type> currentNode);
    
    int getSize();
    
    
    
private:
    int capacity;
    double efficiencyPercentage;
    int size;                                                    Type * internalStorage;
    
    HashNode<Type> * internalArray;
    int findPosition(HashNode<Type> currentNode);
    int handleCollision(HashNode<Type> currentNode);
    void updateSize();
    int getNextPrime();
    bool isPrime(int candidateNumber);
};