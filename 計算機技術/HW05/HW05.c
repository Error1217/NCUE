#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Please input a number: ");
    int rank = 0;
    scanf("%d", &rank);
    
    for (int i=0; i<rank; i++) {
        for (int space = 0; space < rank - i; space++) {
            printf(" ");
        }
        
        for (int num = 0; num < i*2 + 1; num++) {
            printf("%d", (i+1)%10);
        }
        printf("\n");
        
    }

    return 0;
}
