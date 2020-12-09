#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Card
{
public:
	string aCard[3];
	string rank(int index);
	string suit(int index);
	string joker(int index);
	
	Card()
	{
		aCard[1] = rank(13);
		aCard[0] = suit(4);
		aCard[2] = joker(1);
	}
	Card(int suitIndex, int rankIndex, int jokerIndex)
	{
		aCard[1] = rank(rankIndex);
		aCard[0] = suit(suitIndex);
		aCard[2] = joker(jokerIndex);
	}
	void print();
};
class CardDeck
{
public:
	Card ArrayDeck [55];
	CardDeck()
	{
		int arrayIndex = 0;
		for(int i=0;i<4;i++)
			for (int j = 0;j < 13;j++)
			{
				ArrayDeck[arrayIndex] = Card(i, j, 1);
				arrayIndex += 1;
			}
		for (int i = 0;i < 3;i++) {
			ArrayDeck[arrayIndex] = Card(4, 13, 0);
			arrayIndex += 1;
		}

	}
};
