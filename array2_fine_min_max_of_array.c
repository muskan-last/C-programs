#include<stdio.h>
#include<stdlib.h>
int fine_min_max_elemet(){
    int size;
    int element;
    printf("enter number of times you want array would be : ");
    scanf("%d",&element);

    int *arr=(int*) malloc(sizeof(int)*size);

    if(arr==NULL){
        printf("error!");
        return 1;
    }

    for(int i = 0 ; i<element ; i++){
        printf("enter thee %dth elemet of the array : ",i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    int min=arr[0];

    for(int i = 0 ; i<element ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("\nthe max of given array is : %d \n the min of given array is : %d ",max,min);
    
}



    
int main(){
    int a;
    int size;
fine_min_max_elemet();

    return 0;
}