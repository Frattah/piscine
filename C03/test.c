//#include "ex00/ft_strcmp.c"
//include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
//#include "ex05/ft_strlcat.c"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
//	char s1[50];
//	char s2[50];

	// strcmp | strncmp
/*
	fgets(s1,50,stdin);
	s1[strlen(s1) - 1] = '\0';
	fgets(s2,50,stdin);
	s2[strlen(s2) - 1] = '\0';
	printf("%d == %d", strncmp(s1,s2,5), ft_strncmp(s1,s2,5));
*/
	// strcat | strncat
	
	//strncat(s1, s2, 4);
//	ft_strncat(argv[1], argv[2], 4);
//	puts(argv[1]);
//	puts(argv[2]);

	// strstr
	puts(ft_strstr(argv[1], argv[2]));

	// strlcat
	
//	char s3[50] = "ciao questa è una frase";
//	char s4[] = "parola";	 
//	printf("%lu",test(s3,s4,9));
//	puts(s3);
}	
