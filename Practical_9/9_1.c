#include<stdio.h>
int main(){
    int arr[50];
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    for(int i = 0; i<n;i++){
        printf("Enter %d element of array : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for(int j = 0; j<n;j++){
        if(arr[j]>max){
            max = arr[j];
        }
    }
    printf("The max element is : %d",max);
    return 0;
}