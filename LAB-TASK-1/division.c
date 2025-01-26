#include<stdio.h>
int division(int a, int b){
    int x = a/b;
    return x;
}
int main(){
    int num1, num2, result;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    result = division(num1, num2);
    printf("Result: %d", result);
}
