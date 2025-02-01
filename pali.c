
// ----------------------------------------
// File Name: pali.c
// Author: Vinod Sasidharan
// Version:
//        1.0 - October 7, 2017
//        1.1 - Updated with proper spaces
//        1.2 - Updated with new version number
//        1.3 - new version number for test repo:test branch
//        1.4 - version number of 1st feature commit
//        1.5 - version number of 2nd feature commit
//        1.6 - version number of 3rd feature commit
//        1.7 - version number of 4th feature commit
//        1.8 - version number of 5th feature commit
//        1.9 - version number of 6th feature commit
// ----------------------------------------

#include <stdio.h>
#include <string.h>
//#include <malloc.h>

int pali(char *s)
{
	int flag = 0;

	char *s2 = s + strlen(s) - 1;

	// sanity check
	if(!*s) return 0;
	//while(*(s2--) == *(s++) && *s);
	while(flag == 0)
	{
		if((*(s2--) == *(s++)) && *s)
			flag = 0;
		else
			flag = 1;
	}
	// Added extra comment to check git merge
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
