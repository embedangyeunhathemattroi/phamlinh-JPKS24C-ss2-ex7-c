#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Nh?p v�o m?t s? nguy�n c� 4 ch? s?: ");
    scanf("%d", &num);

    if (num < 1000 || num > 900) {
        printf("S? nh?p v�o kh�ng ph?i l� s? nguy�n c� 4 ch? s?.\n");
        return 1; 
    }

    int temp = num; 
    while (temp != 0) {
        sum += temp % 10; 
        temp /= 10;       
    }

    printf("T?ng c�c ch? s? c?a s? %d l�: %d\n", num, sum);

    return 0;
}
