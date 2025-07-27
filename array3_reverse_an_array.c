#include<stdio.h>
#include<stdlib.h>

int reverse_an_array(){
    int element;
    printf("enter number of times you want array would be : ");
    scanf("%d",&element);
    int temp;

    int *arr=(int*) malloc(sizeof(int)*element);

    if(arr==NULL){
        printf("error!");
        return 1;
    }

    for(int i=0; i <element ; i++){
        printf("enter the %dth element of the array : ",i+1);
        scanf("%d",&arr[i]);
    }
    
     int start=0;
    int end=element-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
      printf("the reverse array is : ");
         for(int i= 0; i<element;i++){
        printf("%d\t",arr[i]);

    }

}
int main(){
    reverse_an_array();
    return 0;
}