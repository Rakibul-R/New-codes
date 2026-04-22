#include<stdio.h>
int count(int n);
int count_d=0;

int main() {
int num,sum=0;

printf("Enter your number: ");
scanf("%d",&num);

count_d = count(num);

for(int i=0; i<=count_d; i++){
int r_m = num%10;
int new_num =num/10;
sum+=r_m;
num=new_num;
if(num==0){
	break;
}
}
printf("\nThe sum of digit is = %d",sum);

return 0;
}

int count(int n){
	if(n==0){
	return count_d;
	}
	int k= n/10;
	count_d++;
	return count(k);
	}
