#include <stdio.h>
void main() {
    int a[30], b[50];
    int i, n, c = 0, k = 0;
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


How It Works:

Reads an n-bit input stream from the user.
Checks for five consecutive 1s, then inserts a 0 after them.
Displays the stuffed data with flags (01111110).
    
Example Input/Output:

Enter the number of bits: 10
Enter the bit stream (0s and 1s only):
1 1 1 1 1 0 1 1 1 1
Data after Bit Stuffing: 01111110 11111001111 01111110
    
The 0 is stuffed after every five consecutive 1s.
