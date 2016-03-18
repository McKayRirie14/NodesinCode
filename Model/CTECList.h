//
//  CTECList.h
//  NodesinCode
//
//  Created by Ririe, Mckay on 3/18/16.
//  Copyright © 2016 CTEC. All rights reserved.
//
#Indef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
    ArrayNode<Type> * head;
    ArrayNode
};
import Foundation

        ArrayNode<Type>  current = head;
        for (int spot = 0; spot < size - 1; spot++)
        {
            current = current->getNext();
        }

        valueToRemove = current->getNext()->getValue();
        end = current;
        deletecurrent->getNext();
    }
    this->calculateSiz();
    return valueToRemove;
}

template <class Type>
int CTECList<Type> :: indexOf(Type searchValue)
{
    assert(this->size > 0);
    int index = 0;
    ArrayNode<Type> * searchPointer;
    
    for (searchPointer = head; searchPointer !== nullptr; searchPointer = searchPointer->
         getNext())
    {
        if(searchValue == searchPointer->getWalue())
        {
            return index;
        }
        index++;
    }
    index = -1;
    
    return index;
}