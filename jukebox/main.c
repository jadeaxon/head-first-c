// C Standard Library
#include <stdio.h> // For printf() and fgets().
#include <string.h> // For strstr().


// Global track database array.
char tracks[][80] = {
	"I left my heart in Harvard Med School",
	"Newark, Newark - a wonderful town",
	"Dancing with a Dork",
	"From here to maternity",
	"The girl from Iwo Jima",
}; // tracks


// Chomps all newlines off the end of a string if there is one.  Actually removes all newlines from
// the string no matter where they are!
void chomp(char* s) {
	char* pos = strchr(s, '\n'); // Get the position of a newline, if any.
	if (pos != NULL) {
		*pos = '\0';
		chomp(s); // Recursion.
	}
	else { // No newline.
		return; // Base case.
	}
} // chomp()


// Searches track "database" for a given query string.
void find_track(char query[]) {
	int i;
	for (i = 0; i < 5; i++) {
		if (strstr(tracks[i], query)) {
			printf("Track %i: '%s'\n", i, tracks[i]);
		}
	} // next track
} // find_track()


// Asks user what track to search for.
int main(void) {
	char query[80];
	printf("Search for: ");
	
	// BUG: I believe this reads in the newline as well.
	fgets(query, 80, stdin); // Read input from stdin.
	chomp(query); // Remove trailing newline.

	find_track(query);
	return 0;
} // main()


