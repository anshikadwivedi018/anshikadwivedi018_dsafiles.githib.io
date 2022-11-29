#include<stdio.h>
void towerofhanoi(int n,char fs,char ts,char as)
{
	if(n==1)
	{
		printf("Move disc 1 from stand %c to %c \n",fs,ts);
		return;
	}
	towerofhanoi(n-1,fs,as,ts);
	printf("Move disc %d from %c to %c\n",n,fs,ts);
	towerofhanoi(n-1,as,ts,fs);
}
int main()
{
	int n=2;
	towerofhanoi(n,'A','C','B');
}
