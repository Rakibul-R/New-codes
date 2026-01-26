#include<stdio.h>

int main(){

int amount;
printf("Enter the amount of money you have: ");
scanf("%d",&amount);

if(amount<=0){
    printf("\nInvalid input.The amount cannot be zero or negative.\n");
}
int tk1000,tk500,tk200,tk100,tk50,tk20,tk10,tk5,co2,co1;
if(amount>0){
    tk1000=amount/1000;
    amount=amount%1000;

    tk500=amount/500;
    amount=amount%500;

    tk200=amount/200;
    amount=amount%200;

    tk100=amount/100;
    amount=amount%100;

    tk50=amount/50;
    amount=amount%50;

    tk20=amount/20;
    amount=amount%20;

    tk10=amount/10;
    amount=amount%10;

    tk5=amount/5;
    amount=amount%5;

    co2=amount/2;
    amount=amount%2;

    co1=amount/1;
    amount=amount%1;

    if(tk1000>=1){
    printf("\nYou have '%d' note of one thousand taka.(%d/=)\n", tk1000,tk1000*1000);
    }
    if(tk500>=1){
         printf("You have '%d' note of five hundred taka.(%d/=)\n", tk500,tk500*500);
    }
    if(tk200>=1){
         printf("You have '%d' note of two hundred taka.(%d/=)\n", tk200,tk200*200);
    }
    if (tk100>=1) {
       printf("You have '%d' note of one hundred taka.(%d/=)\n", tk100,tk100*100);
    }
    if (tk50>=1){
        printf("You have '%d' note of fifty taka.(%d/=)\n", tk50,tk50*50);
    }
    if(tk20>=1){
        printf("You have '%d' note of twenty taka.(%d/=)\n", tk20,tk20*20);
    }
    if(tk10>=1){
        printf("You have '%d' note of ten taka.(%d/=)\n", tk10,tk10*10);
    }
    if(tk5>=1){
        printf("You have '%d' note or coin of five taka.(%d/=)\n", tk5,tk5*5);
    }
    if ((co2>=1)){
        printf("You have '%d' note or coin of two taka.(%d/=)\n", co2,co2*2);
    }
    if(co1>=1){
        printf("You have '%d' note or coin of one taka.(%d/=)\n", co1,co1*1);
    }
    

              printf("\nRest of the amount is '%d'", amount);

    
}




    return 0;
}
