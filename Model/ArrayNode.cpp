/*
 * ArrayNode.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */


#include "ArrayNode.h"

template<class Type>
ArrayNode<Type>::ArrayNode() : Node<Type>()
{
	this->next = nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(const Type& value) : Node<Type>(value)
{
	this->value = value;
	this->next= nullptr;
}

template<class Type>
ArrayNode<Type>::ArrayNode(const Type& value, ArrayNode * next) : Node<Type>(value)
{
	this->value = value;
	this->next = next;
}

template<class Type>
ArrayNode<Type>::~ArrayNode()
{
	// TODO Auto-generated instructor stub
}

template<class Type>
ArrayNode<Type> * ArrayNode<Type>:: getNext()
{
	return this->next;
}

template<class Type>
void ArrayNode<Type>:: setNext(ArrayNode<Type> * next)
{
	this->next = next;
}
