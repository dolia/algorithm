#include <stdio.h>


int gcd(int x, int y){

	int max,min,mod;

	max = x>y?x:y;
	min = x<y?x:y;	

	mod = max%min;
	if (mod==0){
		return min;
	}else{
		return gcd(max,mod);
	}
}


int  main(){

	int x=1204,y=256,g=0;
	g = gcd(x,y);
	printf(" Greatest common divisor of %i and %i is : %i\n",x,y,g);
	return 0;
}
