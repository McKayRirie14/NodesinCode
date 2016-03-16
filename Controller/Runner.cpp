/*
 * Runner.cpp
 *
 *  Created on: Feb 18, 2016
 *      Author: mrir2917
 */

#include "Runner.h"
#include "ArrayController.h"
int main()
{
	double moreNumbers[5]

	for(int spot = 0; spot < 5; spot++)
	{
		moreNumbers[spot] = (spot * 34324 + 3948753984) % 2342.3;
	}

	ArrayController * baseController = new ArrayController();
	baseController->start();
	return 0;
}
