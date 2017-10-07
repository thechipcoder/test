
// ----------------------------------------
// File Name: pali.c
// Author: Vinod Sasidharan
// Version:
//        1.0 - October 7, 2017
// ----------------------------------------

#include <stdio.h>
#include <string.h>
//#include <malloc.h>

int pali(char *s)
{
	char *s2 = s + strlen(s) - 1;

	// sanity check
	if(!*s) return 0;
	while(*(s2--) == *(s++) && *s);
	return (!*s && *(++s2) == *(--s));
}

int main(void)
{
	char buff[32];
	
	fputs("Input string plz: ",stdout);
	fgets(buff, sizeof(buff), stdin);

	*(buff + strlen(buff) - 1) = '\0';

	printf("Is the string \"%s\" palindrome? %s\n",buff, pali(buff)?"YES":"NO");
	return 0;
	
}
