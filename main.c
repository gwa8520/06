#include <stdio.h>
#include <stdlib.h>

	
	int sumTwo(int a,int b){
	
		return a+b;
	}
	
	int squre(int n){
		
		return n*n;
	}
	
	int get_max(int x,int y){
		
		if(x>y){
			return x;
		}
		else{
			return y;
		}
	}
	
	int main(int argc, char *argv[]) {
		
		int a,b,n,x,y;
		a=3;
		b=10;
		n=5;
		x=2;
		y=7;
		
		
		printf("sumTwo result : %i\n",sumTwo(a,b));
		printf("squre result : %i\n",squre(n));
		printf("get max result : %i\n",get_max(x,y));
		
	return 0;
}
	
