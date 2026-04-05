#include<stdio.h>

int fibonacci(int n);

int main(){

    int n;
    printf("Enter the nth number of series: ");
    scanf("%d", &n);

    int i=0;
    printf("The series of %d Fibonacci numbers is: ",n);
    while(i<=n){
    
        
        printf("%d\t",fibonacci(i));
        i++;
    }
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
