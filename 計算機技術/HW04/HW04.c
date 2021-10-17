#include <stdio.h>
#include <math.h>

float ave (int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    
    return ((float)sum/size);
}


int max (int *arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i]>max) {
            max = arr[i];
        }
    }
    return max;
}

int min (int *arr, int size) {
    int min = pow(2, 32);
    for (int i = 0; i < size; i++) {
        if (arr[i]<min) {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, const char * argv[]) {
    printf("Please input the number of integers:");
    int timer = 0;
    scanf("%d", &timer);
    int num = 0;
    int arr[timer];
    for (int i=0; i<timer; i++) {
        printf("Integer #%d ..... ", i);
        scanf("%d", &num);
        arr[i] = num;
    }
    float Ave = ave(arr, timer);
    int Max = max(arr, timer);
    int Min = min(arr, timer);
    printf("The average is %.2f\n", Ave);
    printf("The maximum is %d\n", Max);
    printf("The minimum is %d\n", Min);
    return 0;
}
