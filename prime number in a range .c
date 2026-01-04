#include<stdio.h>

int main(){
    int n,i,find=0;
    printf("Enter your range (n) : ");
    scanf("%d",&n);
    for( i=2; i<=n; i++){
        int prime=1;
            for(int j=2; j<i; j++){
                if(i%j==0){
                    prime=0;
                    break;
                }
            }
         if(prime){
            printf("%d \n",i);
            find=1;
         }     
    }
  if (!find)
      {
       printf("No prime number find in your range(%d)...Thanks you",n);
      }
    return 0;
}
