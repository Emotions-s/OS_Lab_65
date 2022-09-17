// 64050177 พิสิษฐ์ เปรื่องปราชญ์
#include<stdio.h>
int main(void) {
	
	int num;
	float sum = 0;
	int count = 0;
	
	printf("Enter number: ");
	scanf("%d", &num);
	while (num > 0) {
		sum += num;
		printf("Enter number: ");
		scanf("%d", &num);
		count++;
	}
	printf("sum = %.0f\n", sum);
	if (sum <= 0) {
		printf("average = 0.00\n");
	}
	else {
		printf("average = %.2f\n", (sum / count));
	}
	return 0;
}
