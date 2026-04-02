#include<stdio.h>

int bottlecount(int buy_bottle);
int total_drink_bottle=0;

int main(){

   int buy_bottle;
   printf("Enter your Cola bottle number: \n");
   scanf("%d", &buy_bottle);

   bottlecount(buy_bottle);

  total_drink_bottle = total_drink_bottle + buy_bottle;

   printf("Your total drink bottle is : %d", total_drink_bottle);


    return 0;
}

int bottlecount(int buy_bottle){
    
    int new_bottle,extra_bottle;
    new_bottle = buy_bottle/3;
    extra_bottle = buy_bottle%3;
    int all_bottle_i_have_now = new_bottle + extra_bottle;

    total_drink_bottle = total_drink_bottle + new_bottle;

    if(all_bottle_i_have_now>=3){
        bottlecount(all_bottle_i_have_now);
    }

    return total_drink_bottle;

}
