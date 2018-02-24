#include <stdio.h>
#define N 6

int printSort(int arr[]){
	int l;
	printf("{");

	for (l=0;l<N;l++){
		printf("%d ",arr[l]);
	}
	printf("}\n");

	return 0;

}


int main(){

	int arr[N] = {200,8,5,9,1,3};

	int i,j,k,temp;

	for (i=0;i<N;i++){
		for (j=i+1;j<N;j++){
	
			if (arr[j]<arr[i]){

				temp = arr[j];

				for(k=j;k>i;k--){
					arr[k] = arr[k-1];
				}

				arr[i] = temp;
			}
		}
		printSort(arr);

	}



	printSort(arr);

}

