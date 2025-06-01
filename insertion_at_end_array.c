#include<stdio.h>
int main(){
  int arr[100];
  int numOfElement, element, i, index;
  
  printf("Enter the number of elements: ");
  scanf("%d", &numOfElement);
  
  printf("\nEnter the element inside array\n");
  for(i=0; i<numOfElement; i++){
    scanf("%d",&arr[i]);
  }
  
  printf("\nEnter element to insert at end: ");
  scanf("%d", &element);
  
  arr[numOfElement] = element;
  
  printf("\nThe final array\n");
  for(i=0; i<=numOfElement; i++){
    printf("%d\n",arr[i]);
  }
}
