// Asks for card rank and prints out value.

#include <stdio.h>
#include <stdlib.h>


int main() {
	char card_name[3];
	puts("Enter the card name: ");
	scanf("%2s", card_name);
	int val = 0;
	
	char rank = card_name[0];
	switch (rank) {
		case 'A':
			val = 11; break;
		case 'K':
			val = 10; break;
		case 'Q':
			val = 10; break;
		case 'J':
			val = 10; break;
		default:
			// val = atoi(rank); // FAIL: atoi() takes a C string.
			// PRE: char is ASCII or 0-9 are sequential.
			val = rank - '0';
		} // switch

	printf("The card value is %i\n", val);
	return 0;
} // main()

