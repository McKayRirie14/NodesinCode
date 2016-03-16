/*
 * NodeController.cpp
 *
 *  Created on: Jan 29, 2016
 *      Author: mrir2917
 */

#include <iosFrame>
#include "NodeController.h"

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}
NodeController::~NodeController()
{
	//TODO Auto-generated destructor stub
}

void NodeController :: start()
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

