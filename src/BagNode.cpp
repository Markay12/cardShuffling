#include <cstdlib>
#include <iostream>
#include <ctime>

#include "BagNode.h"

using std::cout;

//default constructor
BagNode::BagNode()
{

}

char BagNode::getCurrVal()
{

	if (first == NULL)
	{
		return NULL;
	}
	else
	{
		return first->currentCard->getCardVal();
	}	

}

char BagNode::getCurrSuit()
{

	if (first == NULL)
	{
		return NULL;
	}
	else
	{
		return first->currentCard->getCardSuit();
	}

}


void BagNode::empty()
{


	//clear all elements in our bag vector
	while (first != NULL)
	{

		temp = first;
		first = first->next;
		free(temp);


	}




}

void BagNode::fill()
{


	//same method as initialize but we create a whole new stack of cards
	//
	//have to start with an empty grabBag

	int i = 1;

	while (i <= 13)
	{
		int j = 1;
		
		while (j <= 4)
		{


			if (j == 1)
			{
				addRandom();
			}
			else if (j == 2)
			{
				addRandom();
			}
			else if (j == 3)
				addRandom();
			}
			else if (j == 4)
			{
				addRandom();
			}

		
}

//return current card in deck and increment to next
//

Cards BagNode::dealCard()
{

}

bool BagNode::isEmpty()
{
}

int BagNode::getCurrentSize()
{
}


void BagNode::display(struct BagNode* node)
{


}

void BagNode::addCard(Cards* )
{

	Cards* newCard = new Cards();
	newCard->setCard(); //give our new card set suit and value

	//creation of new node
	nodePointer addNode = new node;

	addNode->next = NULL;
	addNode->currentCard = newCard; //copy new Card constructor

	if (first != NULL)
	{
		current = first;

		//check if we are at the end of the linked list
		while(current->next != NULL)
		{
			current = current->next;

		}

		//last node relation to the new ndoe
		current->next = addNode;
	}
	else
	{
		//new node becomes the front of the list if linked list is empty
		first = addNode;
	}

}

void BagNode::addRandom()
{

	Cards* newCard = new Cards(); //instantiate new object
	newCard->setCard(); //set the cards value

	nodePointer addNode = new node;

	addNode->next = NULL;
	addNode->currentCard = newCard; //copy this new card constructor

	if (first != NULL)
	{
		current = first;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = addNode;
	}
	else
	{
		first = addNode;
	}
}

