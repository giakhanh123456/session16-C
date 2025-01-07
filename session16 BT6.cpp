#include<stdio.h>
#include<stdlib.h>

int timphantu(int *arr, int n, int giatri) {
    for (int i = 0; i < n; i++) {
        if (*(arr + i) == giatri) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int *arr;
    int n = 5, giatri;
    arr = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		printf("array[%d] = ", i);
		scanf("%d", arr + i);
	}
    printf("Mang da cho: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
       	printf("\nnhap gia tri can tim = ");
		scanf("%d", &giatri);
    int vitri = timphantu(arr, n, giatri);
    if (vitri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri %d\n", giatri, vitri);
    } else {
        printf("Khong tim thay\n");
    }
    return 0;
}
