#include <stdio.h>

int main() {
    int rows = 5;

    
    for (int i = rows; i >= 1; i--) {
        

        for (int j = 0; j < rows - i; j++) {
            printf("  "); 
        }

        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }

        printf("\n");
    }

    return 0;
}
