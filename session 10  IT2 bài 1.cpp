#include <stdio.h>

int main() {
    int arr[10] = {12, 45, 23, 56, 78, 90, 34, 67, 89, 100};
    int n = 10;
    int x, i, found = 0;


    printf("M?ng hi?n t?i là: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nh?p ph?n t? c?n t?m: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Phan tu %d ton tai trong mang tai vi tri %d\n", x, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Phan tu %d khong ton tai trong mang\n", x); 
    }

    return 0;
}

