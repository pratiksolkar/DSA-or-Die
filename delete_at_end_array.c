#include<stdio.h>
int main(){
  int numElement;
  int arr[100];
  
  printf("Enter the no. of element : ");
  scanf("%d", &numElement);
  
  printf("\nEnter the array elements\n");
  for(int i=0; i<numElement; i++){
    scanf("%d", &arr[i]);    
  }
  
  printf("\nFinal array... \n");
  for(int i=0; i<numElement-1; i++){
    printf("%d\n", arr[i]);
  }
}
