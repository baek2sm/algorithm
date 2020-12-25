#include <stdio.h>

int main(void){
	int array[10] = {0, 6, 4, 5, 1, 8, 9, 7, 3, 2};
	int temp;	
	for(int i=0; i<10; i++){
		for(int j=0; j<9-i; j++){
			if(array[j] > array[j+1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}	
	for(int i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
