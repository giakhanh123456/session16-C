#include<stdio.h>

int main(){
	int a = 100;
	int *ptr = &a;
	printf("gia tri cua bien = %d\n", a);
	printf("dia chi cua bien = %p\n", &a);
	
	printf("gia tri cua bien qua con tro = %d\n", *ptr);
	printf("dia chi cua bien qua con tro = %p\n", ptr);
}
