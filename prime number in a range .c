#include<stdio.h>

int main(){
    int n,i,find=0, prime=1;;
    printf("Enter your range (n) : ");
    scanf("%d",&n);

    if(n<2){
        printf("No prime number find in your range(%d)...Thanks you",n);
        return 0;
    }
    if(n>='a'||n>='z'||n>='A'||n>='Z'||n<0){
        printf("Invalid input...Please enter a valid number");
        return 0;
    }
    for( i=2; i<=n; i++){
        prime=1;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    prime=0;
                    continue;
                }
            }
            if(i==2)
            printf("\nThe prime numbers in your range(%d) is: \n",n);
         if(prime){
            printf("%d \t",i);
            find=1;
         }     
    }

    return 0;
}
