#include<stdio.h>

void main(){
	int a[5],i,j,count;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		count=-1;
		for(j=0;j<5;j++){
			if(a[i]==a[j]){
				count+=1;
			}
					}
		if(count==0){
			printf("%d ",a[i]);
		}
	}
}

