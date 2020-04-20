#include<stdio.h>
#include <pthread.h> 

void* hello(void *arg)
{
printf("hello");
}
main()
{
pthread_t t1,t2;

pthread_create(&t1, NULL, &hello, NULL);
pthread_create(&t2, NULL,&hello, NULL); 
}



