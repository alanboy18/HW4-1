#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char string1[20];
	char string2[] = "string literal";
	int i;

	printf("Enter a string¡G ");
	scanf("%s", &string1);

	printf("string1 is¡G%s\nstring2 is¡G%s\n"
		"string with spaces between characters is¡G \n"
		,string1,string2);

	for (i = 0; string1[i] != '\0'; i++)
		printf("%c ",string1[i]);

	printf("\n");
	system("pause");
	return 0;
}