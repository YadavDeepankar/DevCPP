#include<stdio.h>
#include <conio.h>
#include <string.h>


void main()
{
	int len,x,j,cur,count;
	char s1[20];
	char s2[20];
	scanf("%[^\n]%*c",s1);
	printf("\n%s",s1);
	
	len=x=cur=count=0;
	
	while(s1[x]!='\0'){
		len+=1;
		x++;
	}
	
	cur=len-1;
	
	for(j=0;j<len;j++){
		
		s2[j]=s1[cur];
		cur--;	
	}
	
	printf("\n%s",s2);
	
	for(j=0;j<len;j++){
		if(s1[j]-s2[j]==0){
			count++;
		}
		else continue;
	}
	
	// hello
	// olleh
	
	printf("\n%d",count);
	getch();
}
