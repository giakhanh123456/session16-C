#include<stdio.h>
#include<stdlib.h>

void doiphantu(int *arr, int giatrimoi, int vitri) {
    arr[vitri] = giatrimoi;
}

int main() {
    int *arr;
    int n = 5, giatrimoi, vitri;
    arr = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		printf("array[%d] = ", i);
		scanf("%d", arr + i);
	}
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    	printf("nhap gia tri moi = ");
		scanf("%d", &giatrimoi);
		printf("nhap vi tri can thay doi: ");
		scanf("%d", &vitri);
    doiphantu(arr, giatrimoi, vitri);
    printf("Mang sau khi doi: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}
