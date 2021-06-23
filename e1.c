#include<stdio.h>
#include<string.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL check(string a,string b)
{
	int i,j,idigit,idigitb;
		idigit=a%10;
		a=a/10;
		idigitb=b%10;
		b=b/10;
	if(idigit==idigitb)
	{
		return TRUE;
	}
}

int main()
{
	char a[20];
	
	char b[20],rev;
	BOOL bret=FALSE;
	printf("enter first string\n");
	scanf("%s",a);
	printf("enter second string\n");
	scanf("%s",b);
	bret=check(a,b);
	if(bret==TRUE)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}