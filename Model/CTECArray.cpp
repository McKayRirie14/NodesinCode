/*
 * CTECArray.cpp
 *
 *  Created on: Feb 4, 2016
 *      Author: mrir2917
 */

#include "CTECArray.h"
#include <assert.h>
#include <iostream>
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	this->size = size;
	this->head = nullptr;

	assert(size <=0);

	for(int index = 0; index < size; index++)
	{
		if(head != nullptr)
		{	//We have more than one ArrayNode.
			ArrayNode<Type> * nextNode = new ArrayNode<Type>();
			nextNode->setNext(head);
			head = nextNode;

		}
		else
		{	//This is the first node in the array
			ArrayNode<Type> * firstNode = new ArrayNode<Type>();
			this->head = firstNode;
		}
	}
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	ArrayNode<Type>* deleteMe = head;
	for (int index = 0; index < size; index++)
	{
		if (deleteMe->getNext() != nullptr)
		{
			head = deleteMe->getNext();
			deleteMe->setNext(nullptr);
		}
		delete deleteMe->getNext();
		deleteMe = head;
	}
	delete head;
}

template <class Type>
int CTECArray<Type>:: getSize()
{
	return this->size;
}

template <class Type>
Type CTECArray<Type>:: get(int position)
{
	/*Bounds check for size and negative.
	 * The call to assert checks that the position lies within
	 * the valid range of indices. If it out of the bounds,
	 * the program will exit.
	 */

	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	//Inclusive cause I am inside the bounds guaranteed :D
	for (int spot = 0; spot <= position; spot++)
	{
		if (spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
    }
  }
    return current->getValue();
}

template<class Type>
void CTECArray<Type>::get(int position)
{
	/*Bounds check for size and negative.
	 *
	 */
	assert(position < size && position >= 0);

	ArrayNode<Type> * current = head;
	//Inclusive because I am inside the bounds guaranteed :D
	for(int spot = 0; spot <= position; spot++)
	{
		if(spot != position)
		{
			current = current->getNext();
		}
		else
		{
			return current->getValue();
		}
	}
}

template<class Type>
void CTECArray<Type>::set(int position, const Type& value)
{
	//bounds chech for size and negative.
	assert(position < size && position >= 0);
    
    ArrayNode<Type> * current = head;
    for(int spot = 0; spot <= position; spot++)
    {
        if (spot != position)
        {
            current=current->getNext();
        }
        else
        {
            current=current->setValue();
        }
    }
}

/*
 1) Assert size is greater than 0.
 2) Declare and init valid return variable.
 3) Reference to head and loop.
 4) If there, return index, else go to next.
 5) return index
 */
template <class Type>
int CTECArray<Type> :: indexOf(Type searchValue)
{
    assert(this->size > 0);
    
    int indexOfValue = -1;
    
    ArrayNode<Type> * current = head;
    
    for(int index = 0; index < this-size; index++)
    {
        if (current->getValue() == searchValue)
        {
            return index;
        }
        else
        {
            current = current->getNext();
        }
        
    }
    
    return indexNotFound;
}









































