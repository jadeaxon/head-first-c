#include <stdio.h>

// Attempts to shuffle an "array" of three characters representing cards.
int main() {
	char* cards = "JQK";
	char a_card = cards[2];
	char card_array[] = "JQK"; // Array init *copies* string literal chars into the array.  Copies are mutable.
	// BUG: cards points to a string literal.  You cannot mod a string literal.  Immutable.
	// When you try, program segfaults (aka, bus error).
	/*	
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	*/

	card_array[2] = card_array[1];
	card_array[1] = card_array[0];
	card_array[0] = card_array[2];
	card_array[2] = card_array[1];
	card_array[1] = a_card;
	puts(card_array);
	
	return 0;
} // main()


