#include <stdio.h>
void main() {
    int i, j, k;
    int sn;
    int st[20];
    char op;
    printf("\n How many stations: ");
    scanf("%d", &sn);
    do {
        printf("\n Enter status of stations\n");
        for (i = 0; i < sn; i++) {
            printf("\n Enter status of station %d: ", i + 1);
            scanf("%d", &st[i]);
        }
        // Print ready stations
        for (i = 0; i < sn; i++) {
            if (st[i] == 1) {
                printf("\n Station %d is ready to transmit\n", i + 1);
            }
        }
        printf("\n Repeat? Press Y: ");
        scanf(" %c", &op);  // Added a space before %c to clear the newline character from previous input
    } while (op == 'y' || op == 'Y');
}

Example Input/Output:

How many stations: 4

 Enter status of stations

 Enter status of station 1: 1

 Enter status of station 2: 0

 Enter status of station 3: 1

 Enter status of station 4: 0

 Station 1 is ready to transmit

 Station 3 is ready to transmit

 Repeat? Press Y: Y

 Enter status of stations

 Enter status of station 1: 0

 Enter status of station 2: 0

 Enter status of station 3: 1

 Enter status of station 4: 0

 Station 3 is ready to transmit

 Repeat? Press Y: N
