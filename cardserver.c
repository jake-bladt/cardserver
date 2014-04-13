#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
	int port = (argc <= 1) ? 80: atoi(argv[1]);
	printf("listening on port %i", port);
	return 0;
}
