#include <stdio.h>

int main(void) {
	char a[30];
	int x,i,j;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		
		x=(int)(a[j]);
		if(x%2!=0)
		{
			printf("\n%c",a[j]);	
		}
	}
	return 0;
}
