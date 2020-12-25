#include <stdio.h>

int main(void){
	int array[10] = {0, 6, 4, 5, 1, 8, 9, 7, 3, 2};
	int j, temp;
	for(int i=1; i<10; i++){
		j = i;
		while(array[j-1] > array[j]){
			temp = array[j-1];
			array[j-1] = array[j];
			array[j] = temp;
			j--;
		}
	}
	for(int i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}
