#include "deck.h"
#include "card.h"
#include "main.h"
const char* ranks[14] = { "Filler", "Ace", "Duece", "Trey", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
const char* suits[4] = { "Spades", "Clubs", "Diamonds", "Hearts" };
Deck::Deck() {


	for (int j = 0; j < 4; j++) {
		for (int i = 1; i < 14; i++) {
			/*if (i == 1)
				m_card[j * i].setRank(ACE);
			else if (i == 2)
				m_card[j * i].setRank(DUECE);
			else if (i == 3)
				m_card[j * i].setRank(TREY);
			else if (i == 4)
				m_card[j * i].setRank(FOUR);
			else if (i == 5)
				m_card[j * i].setRank(FIVE);
			else if (i == 6)
				m_card[j * i].setRank(SIX);
			else if (i == 7)
				m_card[j * i].setRank(SEVEN);
			else if (i == 8)
				m_card[j * i].setRank(EIGHT);
			else if (i == 9)
				m_card[j * i].setRank(NINE);
			else if (i == 10)
				m_card[j * i].setRank(TEN);
			else if (i == 11)
				m_card[j * i].setRank(JACK);
			else if (i == 12)
				m_card[j * i].setRank(QUEEN);
			else if (i == 13)
				m_card[j * i].setRank(KING);*/

			switch (i) {
			case 1:
				m_card[j * i].setRank(ACE);
				break;
			case 2:
				m_card[j * i].setRank(DUECE);
				break;
			case 3:
				m_card[j * i].setRank(TREY);
				break;
			case 4:
				m_card[j * i].setRank(FOUR);
				break;
			case 5:
				m_card[j * i].setRank(FIVE);
				break;
			case 6:
				m_card[j * i].setRank(SIX);
				break;
			case 7:
				m_card[j * i].setRank(SEVEN);
				break;
			case 8:
				m_card[j * i].setRank(EIGHT);
				break;
			case 9:
				m_card[j * i].setRank(NINE);
				break;
			case 10:
				m_card[j * i].setRank(TEN);
				break;
			case 11:
				m_card[j * i].setRank(JACK);
				break;
			case 12:
				m_card[j * i].setRank(QUEEN);
				break;
			case 13:
				m_card[j * i].setRank(KING);
				break;
			default:
				cout << "Error";
				break;
			}

		}
		}
		for (int j = 0; j < 4; j++) {
			for (int i = 0; i < 13; i++) {
				/*if (j == 0)
					m_card[i].setSuit(SPADES);
				else if (j == 1)
					m_card[i].setSuit(CLUBS);
				else if (j == 2)
					m_card[i].setSuit(DIAMONDS);
				else if (j == 3)
					m_card[i].setSuit(HEARTS);*/
				switch (j) {
				case 0:
					m_card[i].setSuit(SPADES);
					break;
				case 1:
					m_card[i].setSuit(CLUBS);
					break;
				case 2:
					m_card[i].setSuit(DIAMONDS);
					break;
				case 3:
					m_card[i].setSuit(HEARTS);
					break;
				default:
					cout << "error";
				}
			}
			
		}
	
	
}
int Deck::shuffle() {

	return 0;
}
int Deck::cardDeal() {

	return 0;
}

void Deck::displayDeck() {
	for (int i = 0; i < 52; i++) {
		//cout << m_card[i].getRank() << " of " << m_card[i].getSuit() << ' ' << endl;
		cout << ranks[m_card[i].getRank()] << " of " << suits[m_card[i].getSuit()] << endl;
	}
}