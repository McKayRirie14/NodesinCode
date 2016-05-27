/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#include <iosFrame>
#include "NodeController.h"
#include <stdlib.h> // Allows access to rand() function for random #

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}
NodeController::~NodeController()
{
	//TODO Auto-generated destructor stub
}

void NodeController::start()
{
	arrayTimer.startTimer();

	for(int index = 0; index < notHipsterInts->getSize(); index++)
	{
		notHipsterInts->set(index, (index * 23));
	}

	for(int index = notHipsterInts->getSize() - 1; index >= 0; index--)
	{
		cout << "The contents of the notHipsterInts array node " << index << " are " << notHipsterInts->get(index) << endl;
	}

	arrayTimer.stopTimer();
	{

	}

	arrayTimer.displayTimerInformation();
	{

	}

}

void NodeController::testList()
{
    
}

void NodeController::searchTest()
{
    
}

void NodeController::sortData()
{
    
}

void NodeController:: testHashTable()
{
    HashTable<int> tempTable;
    HashNode<int> tempArray[10];
    for(int spot = 0; spot < 10; spot++)
    {
        int randomValue = rand();
        int randomkey = rand();
        HashNode<int> temp = HashNode<int>(randomkey, randomValue);
        tempTable.add(temp);
        tempArray[spot] = temp;
    }
    bool test = tempTable.contains(tempArray[0]);
    string result;
    if(test)
    {
        result = "its there";
    }
    else
    {
        result = "not anywhere";
    }
    cout << result << endl;
}

void NodeController::doMergeSort()
{
    mergeData = new int[5000];
    
    for(int spot = 0; spot < 5000; spot+)
    {
        int myRandom = rand();
    }   
    
}

void NodeController::mergesort(int data[], int size )
{
    int sizeOne;
    int sizeTwo;
    
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort((data+sizeOne), sizeTwo);
        
        merge(data, sizeOne, sizeTwo);
    }
}

void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp; //Link for a temporary array.
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne = sizeTwo];
    
    while ((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne) [copied2]) //smaller goes in small half
        {
            temp[copied++] = data[copied1++];
        }
        else //larger goesin large half
        {
            temp[copied++] = (data = sizeOne)[copied2++];
        }
    }
    
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied!++];
    }
    while(copied2 < sizeTwo)
    {
        temp[copied++] = (data + sizeOne)[copied2++];
    }
    
    for(index = 0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

void nodeController::doBogo()
{
    int temp [10];
    int check [10];
}

    for(int index = 0; index < 10; index++)
    {
        check[index] = index;
    }


}












































