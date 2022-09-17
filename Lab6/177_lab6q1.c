#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int csum;
void *runner(void *param);

int main(int argc, char *argv[]) {
	pthread_t tid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	int msum = 0;

	pthread_create(&tid, &attr, runner, argv[1]);
	for (int i = 0; i <= atoi(argv[1]); i++) {
		msum += i;
	}		

	// pthread_join(tid, NULL);

	printf("csum = %d\n", csum);
	printf("msum = %d\n", msum);
	printf("diff = %d\n", csum - msum);
	// กรณีแม่เสร็จก่อน diff = -15
	// กรณีลูกเสร็จก่อน diff = 40 (เกิดบ่อยกว่า)
	return 0;
}

void *runner(void *param) {
	int upper = atoi(param);
	int i;
	csum = 0;
	if (upper > 0) {
		for (i = 0; i <= 2 * upper; i++) {
			csum += i;
		}
	}
	pthread_exit(0);
}
