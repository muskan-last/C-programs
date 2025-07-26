#include<stdio.h>
 
int no_of_occurense(int a[],int size , int element){
    int counter =0;

    for(int i = 0 ; i<size ; i++){
        if(a[i]==element){
            counter++;
        }
    }
    printf("\nthe number of occurense of %d is : %d ",element,counter);
}
int main(){
  int size=10,element;
  int arr[10];

  printf("WELCOME TO FINDING THE NUMBER OF OCCURENSE IN THE ARRAY \n\n");
 for(int i = 0 ; i< size ; i++){
        printf("enter the %dth element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\n\nenter the element you want to seethe number of occurens :");
    scanf("%d",&element);

    no_of_occurense( arr, size , element);
    return 0;
}