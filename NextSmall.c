#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


char *NextSmall(char digits[],int n){
	
	printf("Original: %s\n",digits);
	
	bool desc=1;
	bool asc=1;
	bool mixed=0;
		
	for(int i=0;i<n-1;i++){	
		
		if(digits[i] - digits[i+1] <=-1){			///Descinding fail check
			desc=0;									///Permanetly Not Descending Confirmed !!!
		}
		else if(digits[i] - digits[i+1] >=1){		///Ascending fail check
			asc=0;									///Permanetly Not Ascending Confirmed !!!
		}							
	}
	
	if(asc||desc==0){
		mixed = 1;									///Mixed Confirmed !!!
	}
	
/// if entered integer string is in ascending	
	if(asc==1){
		printf("Type Ascending\nAnswer: ");
		char temp;
		temp=digits[n-1];
		digits[n-1]=digits[n-2];
		digits[n-2]=temp;
		
		return digits;
	}
	
/// if entered integer string is in descending
	if(desc==1){
		printf("Type descending\nAnswer: ");
		printf("Not Possible\n");
		
		return 0;
	}
	
/// if entered integer string is mixed
	if(mixed==1){
		printf("Type mixed\nAnswer: ");
		int posmin1,posmin2;
		char min1,min2='9',temp;
		
		for(int i=n-1;i>0;i--){					///find min1 appearing to the left of max no. FROM RHS eg- 497    "4" is first min left to any max
			
			if(digits[i]>digits[i-1]){
				posmin1=i-1;						///record the posotion of min1 from RHS
				min1=digits[posmin1];
				break;
			}	
		}
		for(int i =posmin1+1;i<n;i++){				///finding min2 to the right of  min1.
			if(digits[i]<min2 && digits[i]>min1){
				min2=digits[i];
				posmin2=i;						///record the position of min2
			}
		}

		min1=digits[posmin1];						///swap  min1......with min2
		digits[posmin1]=digits[posmin2];
		digits[posmin2]=min1;
		
///sort the string from the right of min1	
		for(int i=posmin1+1; i<n; i++){
        	for(int j=i+1; j<n; j++){
            	if(digits[i] > digits[j]){
            		temp = digits[i];
                	digits[i] = digits[j];
                	digits[j] = temp;
            	}
        	}
    	}
    	
	return digits;	
	
	}
}

int main(){
	int n;
	char digit[]="534976";
	n=sizeof(digit);
	char *edit;	
	edit=NextSmall(digit,n-1);
	
	printf("%s",edit);
}
