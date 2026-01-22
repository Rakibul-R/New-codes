#include<stdio.h>
// maximun-or-minimum-threenumbers
void main(){
int a,b,c;
int lergest, middle, smallest;

printf("Enter your three number's: ");
scanf("%d %d %d",&a,&b,&c);

lergest = (a>b)?((a>c)?a:c):((b>c)?b:c);

middle = (a>b)?((b>c)?b:(a>c)?c:a):(c>b)?b:((c>a)?c:a);

smallest = (b>a)?((c>a)?a:c):((c>b)?b:c);

printf("%d is the lergest number.\n", lergest);
printf("%d is the middle number.\n", middle);
printf("%d is the smallest number.\n", smallest);
}
