/*Jacob was tasked with writing a program to find the smallest number among three numbers, but he was instructed to write the program using the extern storage class. 



Assist him in accomplishing his task.

Input format :
The input consists of three space-separated integers: num1, num2, and num3.

Output format :
The output displays "Smallest number is " followed by the smallest of three numbers.*/
#include <stdio.h>
int num1, num2, num3;
int smallest();
int main(){
    scanf("%d %d %d", &num1, &num2, &num3);
    int result = smallest();
    printf("Smallest number is %d", result);
    return 0;
}

int smallest(){
    extern int num1, num2, num3;
    int smallestNum;
    if(num1 < num2){
        if(num1 < num3){
            smallestNum = num1;
        }
        else{
            smallestNum = num3;
        }
    }
    else{
        if(num2 < num3){
            smallestNum = num2;
        }
        else{
            smallestNum = num3;
        }
    }
    return smallestNum;
}
