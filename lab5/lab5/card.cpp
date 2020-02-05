#include "card.h"

Card::Card(Rank, Suit) {
	
	

}
Card::Card() {
	m_rank = DUECE;
	m_suit = SPADES;
}
void Card::setRank(Rank rank) {

	m_rank = rank;

	
}
int Card::getRank(){

	return m_rank;
}
void Card::setSuit(Suit suit) {

	m_suit = suit;

}
int Card::getSuit() {

	return m_suit;
}
void Card::displayCard(Card card) {

}
