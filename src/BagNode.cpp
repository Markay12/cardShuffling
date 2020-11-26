#include <cstdlib>
#include <iostream>
#include <ctime>

#include "BagNode.h"

//default constructor
BagNode::BagNode()
{
	
	int total_face = 13;
	int total_suits = 4;

	for (int i = 0; i < total_suits; i++)
	{
		for(int j = 0; j < total_face; j++)
		{

			Cards newCard;
			this->bag.push_back(newCard);
		}
	}
	this->currCard = 0; //begin at first pointer value	

}

char BagNode::getCurrVal()
{

	return bag[currCard].getCardVal();

}

char BagNode::getCurrSuit()
{

	return bag[currCard].getCardSuit();
}


void BagNode::empty()
{

	//clear all elements in our bag vector
	bag.clear();

}

void BagNode::fill()
{

	//same method as initialize but we create a whole new stack of cards
	bag.clear();

	int total_face = 13;
	int total_suits = 4;

	for(int i = 0; i < total_suits; i++)
	{
		for (int j = 0; j < total_face; j++)
		{

			Cards randomCard;
			this->bag.push_back(randomCard);
		}
	}
	this->currCard = 0; //begin at first pointer value
}


//return current card in deck and increment to next
//

Cards BagNode::dealCard()
{

	if (!this->isEmpty()) //while our deck isn't empty
	{
		int nextCard = this->currCard++;
		return this->bag[nextCard];
	}

	//Yes, I know we're going to have issues here, fix this later. Shouldn't be an issue
	//right now	
}

bool BagNode::isEmpty()
{
	return this->currCard < (int)this->bag.size();
}

int BagNode::getCurrentSize()
{

	return (int)this->bag.size();
}
