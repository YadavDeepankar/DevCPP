#include<stdio.h>
#define MAX 14

int main(){	
	int arr1[MAX],a=0,b=1,c,temp,sum=0;	
	arr1[0]=1;
	arr1[1]=temp=8;
	for(int i=0;i<MAX;i++){		
		if(i==0 || i%2==0){
			c=a+b;	//1 2 3 5
			a=b;	//1 1 2 3
			b=c;	//1 2 3 5
			arr1[i]=c;
		}	
		else{
			arr1[i]=temp+a;
			temp=arr1[i];
		}	
	}
	
	for(int i=0;i<MAX;i++){
		printf("%d,",arr1[i]);
		sum=sum+arr1[i];
	}
	
	printf("\n\n%d",sum);
	
	return 0;

}
