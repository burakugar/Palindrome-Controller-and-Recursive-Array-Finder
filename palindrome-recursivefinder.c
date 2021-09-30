#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_palindrome(int a[],int small, int high)
{
    // base case
    if (small >= high) {
        return 1;
    }
    if (a[small] == a[high]) {
        return check_palindrome(a, small + 1, high - 1); /* check if last and first elements are equal or not */ 
    }
    else {
        return 0;
    }
}
int search_element(int arr[], int input_number,int small, int numbofelement){
	if(small>numbofelement){ 
		return 0;		/* until reach to the end, we are searching for the number by incrementing it's index */
	}
	if(arr[small]== input_number){
		return 1;
	}
	else{
		return search_element(arr,input_number,small+1,numbofelement);
	}
}

int main(){
	int i;
	int a[50];
	int b[20];
	int numb;
	float x;
	printf("Enter number of elements to check if it is palindrome or not: ");
	scanf("%d",&numb);
	printf("Enter the elements: ");
	for(i=0;i<numb;i++){
		scanf("%d",&a[i]);
	}
	if (check_palindrome(a, 0, numb - 1) == 1)
        printf("Palindrome \n"); /* checking if the array is palindrome or not */
    else
        printf("Not Palindrome \n");
        
 	for(i=0;i<20;i++){
 		b[i]=rand() % 90 + 10; /* filling the array with random numbers */
	 }
	 
	 printf("Filled array is ");
	for(i=0;i<20;i++){ 
 		printf("%d ", b[i]);
	 } 
	 printf("\n Please enter a number to search ");
	 scanf("%d",&numb);
	 int numbofelement = sizeof(b) / sizeof(b[0]); /* calculating the number of elements in the array */
	 if (search_element(b,numb,0,numbofelement)==1)
        printf("\n Number is found in the array");
    else
        printf("\n Number is not found in the array");
        
	return 0;
}
