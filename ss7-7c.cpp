#include <stdio.h>

int main() {
    int n;
    printf("Nhập số phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        do {
            printf("Nhập phần tử lẻ thứ %d: ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                printf("Phần tử phải là số lẻ! Nhập lại.\n");
            }
        } while (arr[i] % 2 == 0);
    }

    printf("Các phần tử trong mảng là: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
