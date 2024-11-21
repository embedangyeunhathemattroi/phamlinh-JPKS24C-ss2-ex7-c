#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Nh?p vào m?t s? nguyên có 4 ch? s?: ");
    scanf("%d", &num);

    if (num < 1000 || num > 900) {
        printf("S? nh?p vào không ph?i là s? nguyên có 4 ch? s?.\n");
        return 1; 
    }

    int temp = num; 
    while (temp != 0) {
        sum += temp % 10; 
        temp /= 10;       
    }

    printf("T?ng các ch? s? c?a s? %d là: %d\n", num, sum);

    return 0;
}
