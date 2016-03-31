/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#ifndef SRC_CONTROLLER_NODECONTROLLER_H_
#define SRC_CONTROLLER_NODECONTROLLER_H_

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/CTECList.cpp"
#include "../Model/Timer.h"
#include <string>

using namespace std;

class NodeController
{
private:
	Timer arrayTimer;
    void sortData();
    void testList();
    void searchTest();
    void doBogo();
    void bogosort();
    int * mergeData;
    void doMergesort();
    void mergesort(int data [] size);
    void merge(int data [], int sizeOne, int sizeTwo);
public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* SRC_CONTROLLER_NODECONTROLLER_H_ */
