#include <stdio.h>

void swap(int a,int b);
void _swap(int *a,int *b);

int main() {
    int x=5,y=8;

    swap(x,y);
    printf("x = %d, y = %d\n",x,y);

    _swap(&x,&y);
    printf("x = %d, y = %d\n",x,y);
    return 0;
}

//call by refrence
void _swap(int*a,int*b){
    int t=*b;
    *b=*a;
    *a=t;
    printf("a = %d, b = %d\n",*a,*b);
}



//call by value
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a = %d, b = %d\n",a,b );
}
