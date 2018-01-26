#include <stdio.h>


int gcd(int x, int y){

	int max,min,mod;

	if (x>y){
		max = x;
		min = y;
	}else{

		max =y;
		min = x;
	}

	mod = max%min;

	if (mod==0){

		return min;

	}else{

		return gcd(max,mod);
	}

	return 0;
}


int  main(){

	int x=1204,y=256,g=0;


	g = gcd(x,y);


	printf(" Greatest common divisor of %i and %i is : %i\n",x,y,g);


	return 0;
}
