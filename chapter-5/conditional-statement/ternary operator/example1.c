#include<stdio.h>
int main(){

    int a = 10, b = 20, c;

    if (a < b) {
        c = a;
    }
    else {
        c = b;
    }

    printf("%d", c);

    return 0;
}