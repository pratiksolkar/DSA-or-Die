#include<stdio.h>
int main(){
  int arr[100];
  int numOfElement, begElement, i, index;
  
  printf("Enter the no. of elements: ");
  scanf("%d", &numOfElement);
  
  printf("Enter the elements: \n");
  for(i=0; i<numOfElement; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("Enter element to insert at begining: ");
  scanf("%d", &begElement);
  
  for(i=numOfElement-1; i>=0; i--){
    arr[i+1] = arr[i];
  }
  
  arr[0]= begElement;
  numOfElement++;
  
  printf("The final array\n");
  for(i=0; i<numOfElement; i++){
    printf("%d\n",arr[i]);
  }
}
