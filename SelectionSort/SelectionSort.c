#include <stdio.h>

#define N  6

int main(){

	int arr[N] = {5,9,6,2,1,3};

	int j,k,temp;

	for (j=0;j<N;j++){

		for (k=j+1;k<N;k++){

			if (arr[k]<arr[j]) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k]  = temp;
			}

		}
	}


	for (int i=0;i<N;i++){

		printf("%d  ",arr[i]);
	}


}
