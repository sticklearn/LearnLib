#include <stdio.h>

void automata(){
	int number;
a:
	printf("0");
	scanf("%d", &number);
	if (number == 0)
		goto a;
	if (number == 1)
		goto b;
	goto f;
b:	
	printf("0");
	scanf("%d", &number);
	if (number == 0)
		goto a;
	if (number == 1)
		goto c;
	goto f;
c:
	printf("1");
	scanf("%d", &number);
	if (number == 1)
		goto c;
	if (number == 0)
		goto d;
	goto f;
d:
	printf("1");
	scanf("%d", &number);
	if (number == 1)
		goto c;
	if (number == 0)
		goto a;
	goto f;

f:
	fprintf(stderr, "error \n");
	exit();
  
 }
