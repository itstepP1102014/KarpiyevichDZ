#include <stdio.h>
#include <stdlib.h>

int main()

{
	char mama[]="mama", myla[]="myla", ramu[]="ramu";
	printf("%s %s %s\n", mama, myla, ramu);
	printf("%s %s %s\n", mama, ramu, myla);
	printf("%s %s %s\n", myla, mama, ramu);
	printf("%s %s %s\n", myla, ramu, mama);
	printf("%s %s %s\n", ramu, mama, myla);
	printf("%s %s %s\n", ramu, myla, mama);

	return 0;
}
