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

	
	Cards* deck1 = new Cards();

	cout << "\nYour original card value is --> " << deck1->getCardVal() << " of " << deck1->getCardSuit() << "\n";	

	deck1->setCard();

	cout << "\nYour new card value is --> " << deck1->getCardVal() << " of " << deck1->getCardSuit() << "\n";

	BagNode deck2;

	deck2.dealCard();

	cout << "\n---------------\nCreated a new Deck of " << deck2.getCurrentSize() << " cards\n";	

	deck2.empty();	
	cout << "\nThe deck has been emptied and now has " << deck2.getCurrentSize() << " cards\n";
	deck2.fill();

	cout << "\nCreating a new deck of cards\n\nNew deck created with " << deck2.getCurrentSize() << " cards\n";

	cout << "The value of card 1 in the deck is " << deck2.getCurrVal() << "\nand the suit is " << deck2.getCurrSuit() << "\n\n";
	
	return 0;

}



