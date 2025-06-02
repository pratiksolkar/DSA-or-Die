#include<stdio.h>
int main(){
  int arr[100];
  int numOfElement, element, index;
  
  printf("Enter the no. of elements: ");
  scanf("%d", &numOfElement);
  
  printf("\nEnter the elements in array\n");
  for(int i=0; i<numOfElement; i++){
    scanf("%d", &arr[i]);
  }
  
  printf("\nEnter the element which you want to delete: ");
  scanf("%d", &element);
  
  for(int i=0; i<numOfElement; i++){
    if(arr[i]== element){
      index = i;
    }
  }
  
  for(int i=index+1; i<numOfElement; i++){
    arr[i-1]= arr[i];
  }
    
  printf("\nThe final array\n");
  for(int i=0; i<numOfElement-1; i++){
    printf("%d\n",arr[i]);
  }
  
}
