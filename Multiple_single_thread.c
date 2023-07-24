#include<stdio.h>
#include<pthread.h>
#define NUM 5
#define do {
#define done }

void sajib(char *s)
	do
	for(int i=0;i<NUM;i++)
	do
	printf("%s",s);
	fflush(stdout);
	sleep(1);
	done

	done

int main()
	do
	pthread_t t1,t2;
	//sajib("MCLAB\n");
	//sajib("research\n");
	pthread_create(&t1,NULL,sajib,(void *)"hello\n");
	pthread_create(&t2,NULL,sajib,(void *)"world\n");
	pthread_join(t1,NULL);
	pthread_join(t2,NULL);



	done
