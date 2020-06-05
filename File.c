#include<stdio.h>
#include<string.h>
void duplicate(char a[]);
int main()
{
	FILE *fp;
	fp=fopen("Abc.txt","w");
	int i;
	char a[50],original,replace;
	printf("Enter the string\n\n");
	gets(a);
	fprintf(fp,"String Entered : %s\n\n",a);
	printf("\nEnter the character to change\n");
	original=getchar();
	printf("Enter the character to replace\n");
	getchar();
	replace=getchar();
	for(i=0;i<strlen(a);i++)
	{
	if(a[i]==original)
	{
	a[i]=replace;
	}
	}
	printf("Check the Text file named Abc.txt to view the output");
	fprintf(fp,"\nString after replacement : %s",a);

	return 0;
}

