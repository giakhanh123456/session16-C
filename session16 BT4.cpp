#include<stdio.h>
#include<stdlib.h>

void mang(int *arr, int size){
	printf("mang da cho: ");
	for(int i = 0; i < size; i++){
		printf("%d ", *(arr + i));
	}
}

int main(){
	int *arr;
	int size = 5;
	arr = (int*)malloc(size * sizeof(int));
	for(int i = 0; i < size; i++){
		printf("array[%d] = ", i);
		scanf("%d", arr + i);
	}
	mang(arr, size);
	arr = (int*)realloc(arr, size * sizeof(int));
	size ++;
	return 0;
}
