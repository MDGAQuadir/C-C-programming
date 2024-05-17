#include <stdio.h>
 
int main ()
{
	int c1 = 0, c2 = 0, i;
	char ch1[30], ch2[30];
 
	printf ("Enter the First string\n");
	gets (ch1);
 
	printf ("Enter the Second string\n");
	gets (ch2);
 
	while (ch1[c1]!= '\0')
		c1 ++;
 
	while (ch2[c2]!= '\0')
		c2 ++;
 
	i = 0;
 
	while (ch1[i] == ch2[i] && ch1[i] != '\0')
	{
		i ++;
	}
 
	if (ch1[i] > ch2[i])
		printf ("ch1 is greater \n");
	else if (ch1[i] < ch2[i])
		printf("ch2 is greater \n");
	else
		printf ("Both are EQUAL\n");
 
	return 0;
}