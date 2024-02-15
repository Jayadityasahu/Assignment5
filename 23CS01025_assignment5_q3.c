#include <stdio.h>

int main(){
    int n;
    printf("Enter any four digit number: ");
    scanf("%d", &n);

    if(n/1000 <= 0 || n/10000 > 0){
        printf("Enter a four digit number.\n");
        return 0;
    }

    int arr[4];
    int c = 3;
    while(n > 0){
        arr[c] = n%10;
        n /= 10;
        c--;
    }
    printf("%d %d %d %d\n", arr[0], arr[1], arr[2], arr[3]);
    int i = 0, j = 0, k = 0, l = 0;
    while(i < 4){
        while(j < 4){
            while(k < 4){
                while(l < 4){
                    printf("%d%d%d%d\n", arr[i], arr[j], arr[k], arr[l]);
                    l++;
                }
                k++;
                l = 0;
            }
            j++;
            k = 0;
        }
        i++;
        j = 0;
    }
    return 0;
}