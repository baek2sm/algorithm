#include <stdio.h>

void quickSort(int *array, int start, int end){
	if(start>=end){
		return;
	}

	int pivot = start;
	int f = start + 1; // forward, bigger value
	int b = end; // backward, smaller value 
	int temp;
	
	while(f <= b){
		while(f<=end && array[f] <= array[pivot]){ // pivot이 가장 큰 값인 경우 f<=end 예외 필요 
			f++;
		}
		while(b>start && array[b] >= array[pivot]){ // pivot이 가장 작은 값인 경우 b>start 예외 필요 
			b--;
		}
		if(f > b){
			temp = array[pivot];
			array[pivot] = array[b];
			array[b] = temp;
		} else {
			temp = array[f];
			array[f] = array[b];
			array[b] = temp;
		}
	}

	quickSort(array, start, b-1);
	quickSort(array, b+1, end);
}

int main(void) {
	int array[10] = {0, 6, 4, 5, 1, 8, 9, 7, 3, 2};
	quickSort(array, 0, 9);
	for(int i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	return 0;
}

