#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main() {

	char name[20];
	int length;

	printf("Please enter your first name: \n");
	scanf("%s", name);
	length = strlen(name);

	for (int i = 0; i < length; i++) {
		name[i] = toupper(name[i]);
	}

	printf("The name that you entered in CAPS is: %s\n", name);
	return 0;
}
