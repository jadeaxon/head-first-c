#include <stdio.h>

// A Game of Pirates.

// Moves the pirate ship SE.
// lat - our current latitude
// lon - our curren longitude
void go_south_east(int* lat, int* lon) {
	*lat = *lat - 1;
	*lon = *lon + 1;
}

// Makes a pirate travel around the globe.
int main() {
	int latitude = 32;
	int longitude = -64;
	go_south_east(&latitude, &longitude);
	printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
	return 0;
}

