#include <stdio.h>
#include<conio.h>
int main(void) {
	int n,m,o,i,p,flag=0;
	scanf("%d %d",&n,&m);
	o=m*n;
	for(i=1;i<=o/1;i++)
	{
		p=i*i;
		if(p==1)
		{
			printf("yes");
			flag=1;
			break;
		}
		
		
	}
	if(flag==0)
	printf("no");
	return 0;
}
