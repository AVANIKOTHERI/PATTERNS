#include <stdio.h>

int main() {
    int rows = 4, cols = 6; // Change as needed

    for (int i = 0; i < rows; i++) {  // Loop for rows
        for (int j = 0; j < cols; j++) {  // Loop for columns
            printf("*");  
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
