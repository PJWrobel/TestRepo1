#include<stdio.h>
#include<stdlib.h>
char* reverse(char *s)
{	size_t n = strlen(s);
	char *returnStr = malloc(n);
	for(int i=n; i>0; i--, s++)
		returnStr[i] = *s;
}
int main(int argc, char **argv)
{	printf("%s\n", reverse(argv[1]));
	return 0;
}
