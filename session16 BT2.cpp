#include<stdio.h>

void doigiatri(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a = 5, b = 10;
	doigiatri(&a,&b);
	printf("bien a sau thay doi = %d\n",a);
	printf("bien b sau thay doi = %d\n",b);
	return 0;
}
