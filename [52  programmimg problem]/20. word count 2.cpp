#include<stdio.h>
#include<string.h>

int main()
{

	int n,i,j,count=0;

	char s[10002],*word;

	scanf("%d",&n);

	for(i=0;i<n;i++){

        	count=0;

	scanf(" %[^\n]",s);

	word=strtok(s,",!;?. ");

	while(word!=NULL){

        	count++;

    	word=strtok(NULL, ",!;?. ");


	}

	printf("Count = %d\n",count);

	}

	return 0;
}
