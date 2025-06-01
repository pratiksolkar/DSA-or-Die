#include<stdio.h>
int main(){
  int arr[100];
  int numOfElement, num, i, index;
  
  printf("Enter the no. of elements\n");
  scanf("%d",&numOfElement);
  
  printf("Enter the elements\n");
  for(i=0; i<numOfElement; i++){
    scanf("%d",&arr[i]);
  }
  
  printf("At which index do you want to insert the element\n");
  scanf("%d",&index);
  
  printf("The element which is inserting inside array\n");
  scanf("%d",&num);
  
  for(i=numOfElement-1; i>=index; i--){
    arr[i+1] = arr[i];
  }
  
  arr[index]= num;
  numOfElement++;
  
  printf("The final array\n");
  for(i=0; i<=numOfElement; i++){
    printf("%d\n",arr[i]);
  }
  
}
