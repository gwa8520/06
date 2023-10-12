#include <stdio.h>
#include <stdlib.h>



	int factorial(int n){
		
		int i,res=1;
		for(i=1;i<=n;i++)
			res*=i;
		
		return res;
	}
	
	
	int combination(int n, int r){
		
		int div1,div2;
		
		div1=factorial(n);
		div2=factorial(n-r)*factorial(r);
		
		return(div1/div2);	
	}
	
	
	
	int main(int argc, char *argv[]) {
		
		int n,r,result;
		
		printf("enter n\n");
		scanf("%i",&n);
		
		printf("enter r\n");
		scanf("%i",&r);
		
		
		result=combination(n,r);
		
		printf("combination is %i",result);
		
	return 0;
	}
	
