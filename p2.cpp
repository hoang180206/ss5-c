#include<stdio.h>

int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	while(n != 10){
		printf("Nhap n: ");
		scanf("%d", &n);
	}
	
	return 0;
}
