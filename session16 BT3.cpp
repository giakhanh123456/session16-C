#include<stdio.h>

void tong(int a, int b, int *sum){
	*sum = a + b;
}

int main(){
	int a = 10;
	int b = 15;
	int sum;
	tong(a,b,&sum);
	printf("tong 2 so la: %d",sum);
	return 0;
}
