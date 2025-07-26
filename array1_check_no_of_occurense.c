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
  int size,element;
  printf("\nenert the size of the array : ");
  scanf("%d",&size);
    int *arr[]= (int*) malloc (size*sizeof(int));
    if(arr==NULL){
        printf("FAIL.");
    }

    for(int i = 0 ; i< size ; i++){
        printf("enter the %dth element of the array : ");
        scanf("%d",&arr[i]);
    }

    printf("\n\nenter the lement you want to seethe number of occurens :");
    scaanf("%d",&element);

    no_of_occurense( arr, size , element);
    return 0;
}