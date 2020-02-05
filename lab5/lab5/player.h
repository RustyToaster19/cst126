#pragma once
#include "card.h"
#include "deck.h"
class Player {
private:
	bool hasAce;
	Card cards[21];
	int totalScore;
	int dealer;
	Card cardsInHand;
public:
	int player();
	int addCard(Card);
	int showMost();
	int showAll();
	int getScore();
};