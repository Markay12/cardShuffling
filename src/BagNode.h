#include "Cards.h"
#include <ctime>
#include <cstdlib>
#include <vector>

using std::vector;

#ifndef BAGNODE_H
#define BAGNODE_H

class BagNode
{

	public:
		//default constructor
		BagNode();

		//iterator
		int currCard;

		//methods
		vector<Cards> bag;
		void shuffle(); //method to shuffle when 2/3 through
		void empty();
		void fill();

		//getters and setters
		int getCurrentSize();
		bool isEmpty();
		void addItem(Cards);
		int getFrequencyOf(Cards);
		Cards dealCard();
		Cards grabCard();

		char getCurrVal();
		char getCurrSuit();

};

#endif
