#pragma once
#include <string>
using std::string;

enum Suit { SPADES, CLUBS, DIAMONDS, HEARTS };
enum Rank { ACE = 1, DUECE, TREY, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};



class Card {
private:
	int m_rank;
	int m_suit;
public:
	Card(Rank, Suit);
	Card();
	void setRank(Rank);
	int getRank();
	void setSuit(Suit);
	int getSuit();
	void displayCard(Card card);
	
};
