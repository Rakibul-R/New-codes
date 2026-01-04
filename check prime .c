#include<stdio.h>

int main(){
    int Num, ans=1;
    printf("Enter your Number : ");
    scanf("%d",&Num);

    if(Num<=1){
        ans=0;
    }

    for(int i=2; i<Num; i++){
        if(Num%i==0){
        ans=0;
        break;
        }
    }
    if(ans){
        printf("%d is a Prime number",Num);
    } else{
        printf("%d isn't a Prime number", Num);
    }
 
    return 0;
}
