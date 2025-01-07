#include<stdio.h>
#include<stdlib.h>

void sapxep(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() {
    int *arr;
    int n = 5;
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
    sapxep(arr, n);
    printf("Mang sau sap xep: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}
