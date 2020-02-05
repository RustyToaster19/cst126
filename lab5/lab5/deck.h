#pragma once
#include "card.h"
class Deck {
private:
	Card m_card[52];
	Card m_currentCard;
public:	
	Deck();
	int shuffle();
	int cardDeal();
	void displayCard(Card card);
	void displayDeck();
};