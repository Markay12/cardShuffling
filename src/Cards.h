#ifndef CARDS_H
#define CARDS_H

#include <iostream>

//definition of class cards methods
//accessible information within header file for use within main
class Cards
{

	public:

		//constructor
		Cards();

		char suit;
		int val;

		void setCard();
		void getCard();

		char getCardVal();
		char getCardSuit();

};



#endif
