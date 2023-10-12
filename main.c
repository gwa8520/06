#include <stdio.h>
#include <stdlib.h>

	
	void square(int a){
		
		a=a*a;
	}
	
	int main(int argc, char *argv[]) {
		
		int a=2;
		square(a);					 
		printf("a=%i\n",a);
}
	//result=2, Main and stack are separate blocks and have separate values. Block-to-block interaction can be achieved using 'return'
