//find sum of digits of any user defined integer value
#include<stdio.h>

int main(){
	int x, sum = 0, rem;
	printf("Enter an integer value: ");
	scanf("%d", &x);
	while(x>0){
		rem = x % 10;
		sum = sum + rem;
		x = x/10;
	}
	printf("\nsum is %d", sum);
	return 0;
}
