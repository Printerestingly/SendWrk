#include <stdio.h>
int main(){
	int a, total = 0;
	float avg, cnt = 0;
	
	do{
		printf("Enter your number : ");
		scanf("%d",&a);
		total += a;
		if(a>0)
			cnt++;
	}
	while(a>0);
	avg = total/cnt;
	printf("Sum = %d\n", total);
	printf("Average = : %f\n", avg);

	return 0;
}
