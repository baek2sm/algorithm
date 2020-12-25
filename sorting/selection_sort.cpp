#include <stdio.h>

int main(void){
	int array[10] = {0, 6, 4, 5, 1, 8, 9, 7, 3, 2};
	int min, index, temp;
	for(int i; i<10; i++){
		min = 100000;				
		for(int j=i; j<10; j++){
			if(min > array[j]){
				min = array[j];
				index = j; 
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}
	for(int i; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
