#include<stdio.h>
int main(){
  int numElement;
  int arr[100];
  
  printf("Enter the no. of element : ");
  scanf("%d", &numElement);
  
  printf("Enter the elements in array\n");
  for(int i=0; i<numElement; i++){
    scanf("%d", &arr[i]);    
  }
  
  for(int i=0; i<numElement; i++){
    arr[i]=arr[i+1];
  }
  
  printf("Final array... \n");
  for(int i=0; i<numElement-1; i++){
    printf("%d\n", arr[i]);
  }
}
