#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>

int fun(int a,int b);
int sub(int a,int b);
void* p_fun(void *a_value)
{
    int a=*((int *)a_value);
	while(1)
	{
		printf("222%d\n",a);
		sleep(1);
	}
}
int main()
{
	int  a=1,b=2,c=0;
	c=fun(a,b);
	printf("%d\n",c);
	pthread_t pid;
	pthread_create(&pid,NULL,p_fun,NULL);
	while(1)
	{
		sleep(1);
              

	}
}
//1111
