#include <iostream>
using namespace std;
void sum(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%-20d%-20d", i, arr[i]);
        for (int j = 0; j < arr[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int arr[] = {18, 1, 19, 25, 20, 17, 6, 28, 15, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("%-20s%-20s%s\n", "Element", "Value", "Histogram");
    sum(arr, size);

    return 0;
}
