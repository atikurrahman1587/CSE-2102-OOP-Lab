#include<stdio.h>
int subtraction(int a, int b){
    int x = a-b;
    return x;
}
int main(){
    int num1, num2, result;
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);
    result = subtraction(num1, num2);
    printf("Result: %d", result);
}
