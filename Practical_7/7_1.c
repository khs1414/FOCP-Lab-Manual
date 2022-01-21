#include<stdio.h>  
int prime_list(int);  
int prime(int);    
int main()  
{  
    int num;
    int check = 0;  
    printf("Enter a positive number : ");  
    scanf("%d", &num);  
    for(int i= 2; i <=(num-i); i = prime_list(i))  
    {  
        if(prime(num-i))  
        {  
            check = 1;
            printf("Yes it can be expressed : \n"); 
            printf("%d + %d = %d\n", i, num-i, num);  
        }  
    }  
    if(check == 0)  
    {  
        printf("%d cannot be expressed as the sum of 2 prime numbers.\n", num);  
    }  
  
    return 0;  
}  
int prime_list(int x)  
{  
    do  
    {  
        x++;  
    }while(!prime(x));  
  
    return(x);  
}  
int prime(int n)  
{  
    int mid, prime = 1;  
  
    mid = n/2;  
  
    for(int j = 2; j <= mid; j++)  
    {  
        if(n % j == 0)  
        {  
            prime = 0;  
            break;  
        }  
    }  
  
    return(prime);  
}  