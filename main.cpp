#include <stdio.h>

const char sep = '.';

void err(char* msg) {
	fprintf(stderr, "Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	printf("%s%c%s", argv[1], sep, argv[2]);

	return 0;
}
