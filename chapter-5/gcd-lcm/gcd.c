#include <stdio.h>

int main(){
    // program for calculate gcd of two numbers
    int a, b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    printf("GCD of %d and %d is = %d\n", a, b, gcd);

    return 0;
}