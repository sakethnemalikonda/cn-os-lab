#include <stdio.h>
void main() {
    int a[30], b[50];
    int i, j, n, c = 0, pos = 0, k = 0;
    printf("Enter the number of bits: ");
    scanf("%d", &n);
    printf("Enter the bit stream (0s and 1s only):\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++) {
        b[k++] = a[i];
        if (a[i] == 1) {
            c++;
            if (c == 5) { 
                b[k++] = 0;
                c = 0; 
            }
        } else {
            c = 0; 
        }
    }
    printf("\nData after Bit Stuffing: ");
    printf("01111110 "); 
    for (i = 0; i < k; i++) {
        printf("%d", b[i]);
    }
    printf(" 01111110\n"); 
}
