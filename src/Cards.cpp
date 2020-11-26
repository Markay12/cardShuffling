#include "Cards.h"
#include <cstddef>
#include <cstdlib>
#include <ctime>
 
//give random card value
Cards::Cards()
{

	srand(time(NULL));
	this->val = rand() % 13 + 1;
	this->suit = rand() % 4 + 1;
	
}

//give card new values
void Cards::setCard()
{

	this->val = rand() % 13 + 1;
	this->suit = rand() % 4 + 1;

}

char Cards::getCardVal()
{

	//Ace card if value is 1
	if(this->val == 1)
	{
		return 'A';
	}
	//other face card values
	else if (this->val == 10)
	{
		return 'J';
	}	
	else if (this->val == 11)
	{
		return 'Q';
	}
	else if (this->val == 12)
	{
		return 'K';
	}
	//if none of these we just return the value of the card
	else if (this->val == 2)
	{
		return '2';
	}
	else if (this->val == 3)
	{
		return '3';
	}
	else if (this->val == 4)
	{
		return '4';
	}
	else if (this->val == 5)
	{
		return '5';
	}
	else if (this->val == 6)
	{
		return '6';
	}
	else if (this->val == 7)
	{
		return '7';
	}
	else if (this->val == 8)
	{
		return '8';
	}
	else
	{
		return '9';
	}	

}

char Cards::getCardSuit()
{

	if (this->suit == 1)
	{
		return 'H';
	}
	else if (this->suit == 2)
	{
		return 'D';
	}
	else if (this->suit == 3)
	{
		return 'S';
	}
	else
	{
		return 'C';
	}

}
