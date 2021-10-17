#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i=1; i<=9; i++) {
        for (int j=1; j<=9; j++) {
            printf("%d*%d=%d\t", j, i, j*i);
        }
        printf("\n");
    }
    return 0;
}
