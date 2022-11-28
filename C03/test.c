//#include "ex00/ft_strcmp.c"
//include "ex01/ft_strncmp.c"
//#include "ex02/ft_strcat.c"
//#include "ex03/ft_strncat.c"
//#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"
#include "strlcat.c"
#include <stdio.h>
#include <string.h>
size_t strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
    int d_len,s_len,offset,src_index;

    /* obtain initial sizes */
    d_len = strlen(dst);
    s_len = strlen(src);

    /* get the end of dst */
    offset = d_len;

    /* append src */
    src_index = 0;
    while( *(src+src_index) != '\0' )
    {
        *(dst+offset) = *(src+src_index);
        offset++;
        src_index++;
        /* don't copy more than dstsize characters
           minus one */
        if( offset==dstsize-1)
            break;
    }
    /* always cap the string! */
    *(dst+offset) = '\0';

    return( d_len+s_len );
}

int main()
{
	char s1[50];
	char s2[50];

	// strcmp | strncmp
/*
	fgets(s1,50,stdin);
	s1[strlen(s1) - 1] = '\0';
	fgets(s2,50,stdin);
	s2[strlen(s2) - 1] = '\0';
	printf("%d == %d", strncmp(s1,s2,5), ft_strncmp(s1,s2,5));
*/
	// strcat | strncat
/*
	fgets(s1,50,stdin);
	s1[strlen(s1) - 1] = '\0';
	fgets(s2,50,stdin);
	s2[strlen(s2) - 1] = '\0';
	strncat(s1, s2, 4);
	//ft_strncat(s1, s2, 4);
	puts(s1);
	puts(s2);
*/
	// strstr
/*	
	fgets(s1,50,stdin);
	s1[ft_strlen(s1) - 1] = '\0';
	fgets(s2,50,stdin);
	s2[ft_strlen(s2) - 1] = '\0';
	puts(strstr(s1, s2));
*/
	// strlcat
	
	char s3[50] = "ciao questa è una frase";
	char s4[] = "parola";	 
	printf("%lu",test(s3,s4,9));
	puts(s3);
}	
