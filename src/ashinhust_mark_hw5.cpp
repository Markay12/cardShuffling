// Mark Ashinhust
// Assignment 4
// Professor: Justin Selgrad
// Date: 11/23/2020
//
//


#include<iostream>
#include "Cards.h"
#include "BagNode.h"

using std::cin;
using std::cout;



int main()
{


	BagNode* deck1 = new BagNode();
	deck1->addRandom();

	free(deck1);

	cout << "\nThe first value is --> " << deck1->getCurrVal() << " of " << deck1->getCurrSuit() << "\n";


	return 0;

}

