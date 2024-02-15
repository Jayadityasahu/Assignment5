#include<stdio.h>

int main() {
    int num, count=0, temp;
    int digit_seen[10] = {0};
    int sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
temp= num;
while(num!=0){
    num = num/10;
    count++;
} printf("The number of digits is %d\n", count);

    while (temp > 0) {
       
        int digit = temp % 10;
        
        
        if (digit_seen[digit] == 0) {
            sum += digit;
            digit_seen[digit] = 1;
        }

        temp /= 10;
    }

    printf("Sum of unique digits: %d\n", sum);

    return 0;
}
