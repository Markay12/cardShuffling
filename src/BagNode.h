#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>

using std::vector;

#ifndef BAGNODE_H
#define BAGNODE_H

class BagNode
{

	private:
		typedef struct node
		{
			Cards* currentCard;
			node* next;
			node* previous;
		} *nodePointer;

		//pointers
		nodePointer first;
		nodePointer current;
		nodePointer last;
		nodePointer temp;


	public:
		//default constructor
		BagNode();

		//methods
		vector<Cards> bag;
		void addCard(Cards* insertion);
		void addRandom();
		void remove(Cards* cardRemove);
		void display(struct BagNode*);
		Cards insert_front(struct BagNode**, Cards newCard);
		void empty();
		void fill();

		//getters and setters
		int getCurrentSize();
		bool isEmpty();
		int getFrequencyOf(Cards);
		Cards dealCard();
		Cards grabCard();

		Cards popRandom(Cards*);

		char getCurrVal();
		char getCurrSuit();

};

#endif
