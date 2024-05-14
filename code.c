#include <stdio.h>

/* 
    int grid[25] = {
        :, :, :, :, :,
        :, -, -, -, :,
        :, -, -, -, :,
        :, -, -, -, :,
        :, :, :, :, :,
    };
 */

const int EMPTY = 0, NOUGHTS = 1, CROSSES = 2, BORDER = 3;

const int CONVERT[9] = {
    6, 7, 8,
    11, 12, 13,
    16, 17, 18
};

void Initialize (int *grid) {
    int i;

    for (i = 0; i < 25; ++i) {
        grid[i] = BORDER;
    }

    for (i = 0; i < 9; ++i) {
        grid[CONVERT[i]] = EMPTY;
    }
}

void Print (const int *grid) {
    int i;
    for (i = 0; i < 25; ++i) {
        if (i != 0 && i % 5 == 0) {
            printf("\n");
        }
        printf("%4d", grid[i]);
    }
    printf("\n");
}

int main () {
    int grid[25];
    Initialize(&grid[0]);
    grid[CONVERT[0]] = CROSSES;
    Print(&grid[0]);

    return 0;
}
