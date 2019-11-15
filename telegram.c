#include<stdio.h>

void main(){
	int a[10],b[10],i,j,n1,n2;
	
	scanf("%d %d\n",&n1,&n2);
	
	for(i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<n2;j++){
		scanf("%d",&b[j]);
	}
	
	if(n1==n2){
		for(i=0;i<n1;i++){
			if(a[i]==b[i]){
				continue;
			}
			else
			printf("Diff");
		}
		printf("Same");
	}
	else
	printf("Diff");
}
