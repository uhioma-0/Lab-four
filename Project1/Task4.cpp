#include "Task4.h"
#include<iostream>
using namespace std;
	string Card::rank(int index)
	{
		const string Rank [14]= {"_2", "_3", "_4", "_5", "_6", "_7", "_8", "_9", "_10", "Jack", "Queen", "King", "Ace","NaN" };
		return Rank[index];
	}

	string Card::suit(int index)
	{
		const string Suit[5] = { "clubs", "diamonds", "hearts", "spades","NaN"};
		return Suit[index];
	}

	string Card::joker(int index)
	{
		const string joker[2] = { "yes","no" };
		return joker[index];
	}

	void Card::print()
	{
		if (aCard[2] == "yes")
			cout << "Jocker" << endl;
		else
			cout << "{" << aCard[0] << "-" << aCard[1] << "}" << endl;
	}

/*int main()
{
	CardDeck DollarDeck;
	for (int i = 0;i < 55;i++)
		DollarDeck.ArrayDeck[i].print();

}*/
