
#include <stdio.h>

int main(){
	int a[] = {1, 5, 3, 7, 4};
	int arr[2][4] = {{3, 5, 1, 54}, {4, 7, 1, 4}}; // nxn matrix
	int i;

	int sizeofROW = sizeof(arr)/sizeof(arr[0]);
	int sizeofCOL = sizeof(arr[0])/sizeof(int);
	printf("%d",sizeofCOL); // Calculate array length

	for(int i=0; i<sizeofROW; i++){
		for(int j=0; j<sizeofCOL; j++){
			printf("%d ",arr[i][j]); // Calculate array length
		}
		printf("\n");
	}

	return 0;
}
