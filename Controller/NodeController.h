/*
 * NodeController.h
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#ifndef SRC_CONTROLLER_NODECONTROLLER_H_
#define SRC_CONTROLLER_NODECONTROLLER_H_

#include <iostream>
#include <string>

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipsterInts;
	Timer arrayTimer;


public:
	NodeController();
	virtual ~NodeController();
	void start();
};

#endif /* SRC_CONTROLLER_NODECONTROLLER_H_ */
