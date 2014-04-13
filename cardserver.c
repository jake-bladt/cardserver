#include <Objbase.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

GUID getNewSleeve(int deckCount) {
	GUID guidReference;
	HRESULT hCreate = CoCreateGuid(&guidReference);
	return guidReference;
}

int main(int argc, char **argv) {
	int port = (argc <= 1) ? 8014: atoi(argv[1]);
	printf("listening on port %i", port);
	printf("deck ID is %s", getNewSleeve(1));
	return 0;
}
