#include <stdio.h>

int main() {
	int c;
	int pis = 0; // pis = previous is space
	while((c = getchar()) != EOF) {
		if(c == ' ') {
			if(pis == 0) {
				printf("%c", c);
			}
			pis = 1;
		} else {
			printf("%c", c);
			pis = 0;
		}
	}
	printf("\n");
}
