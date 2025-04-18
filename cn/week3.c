#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sleep() function (Linux/Unix)
#include <time.h>   // For time() to seed the random number generator
void main() {
    int i, j, noframes, x; 
    srand(time(NULL)); // Seed the random number generator once
    noframes = (rand() % 10) + 1;  // Generate a random number for frames (1 to 10)
    i = 1;
    j = 1;
    printf("\nNumber of frames is %d\n", noframes);
    while (noframes > 0) {
        printf("\nSending frame %d", i);       
        x = rand() % 10; // Simulate ACK loss or reception
        if (x % 2 == 0) {  // Simulate lost ACK
            printf(" - No ACK received, resending frame %d\n", i);
            sleep(1);  // Wait for 1 second before resending
            printf("\nResending frame %d", i);
        }
        // Simulate ACK reception for each frame
        printf("\nACK for frame %d", j);
        noframes--;  // Decrease the number of frames left
        i++;         // Increment frame number
        j++;         // Increment ACK number
    }
    printf("\nEnd of Stop-and-Wait protocol\n");

    getchar();  // Wait for user input to exit the program
}

Example Input/Output:

Number of frames is 3

Sending frame 1
ACK for frame 1
Sending frame 2 - No ACK received, resending frame 2

Resending frame 2
ACK for frame 2
Sending frame 3 - No ACK received, resending frame 3

Resending frame 3
ACK for frame 3
End of Stop-and-Wait protocol
