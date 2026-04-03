#include<stdio.h>

int fibonacci(int n);

int main(){

    int n;
    printf("Enter the number of Fibonacci terms to display: ");
    scanf("%d", &n);

    printf("The nth Fibonacci number is: %d\n", fibonacci(n));


    return 0;
}


int fibonacci(int n){
    
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int fibN;
     fibN = fibonacci(n-1) + fibonacci(n-2);
    return fibN;
}
