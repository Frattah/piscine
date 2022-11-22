#include <ctype.h>
#include <stdio.h>

int main(){

	for(int i = -126; i < 128; i++){
		printf("%d = %d\n", i, isprint(i));
	}	
}

