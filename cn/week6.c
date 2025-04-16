#include <stdio.h>
int a[10][10], n;
void adj(int k);  // Forward declaration of the adj function
int main() {
    int i, j, root;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Is there a connection from %d to %d (1/0)? ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter root node: ");
    scanf("%d", &root);
    adj(root);
    return 0;
}
void adj(int k) {
    int j;
    // Print adjacent nodes of the root node
    printf("\nAdjacent nodes of root node %d:\n", k);
    for (j = 1; j <= n; j++) {
        if (a[k][j] == 1 || a[j][k] == 1) {
            printf("%d\t", j);
        }
    }
    // Print non-adjacent nodes of the root node
    printf("\n\nNon-adjacent nodes of root node %d:\n", k);
    for (j = 1; j <= n; j++) {
        if (j != k && a[k][j] == 0 && a[j][k] == 0) {
            printf("%d\t", j);
        }
    }
    printf("\n");
}

Example Input/Output:
