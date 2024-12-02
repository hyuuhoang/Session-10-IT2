#include <stdio.h>

void linearSearch(int arr[], int n, int key, int positions[], int* count) {
    int i;
    *count = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            positions[*count] = i;
            (*count)++; 
        }
    }
}

int main() {
    int n, i, key;
    int count = 0; 
    int positions[100]; 

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap mot so nguyen can tim: ");
    scanf("%d", &key);

    linearSearch(arr, n, key, positions, &count);


    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", key);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong co trong mang.\n", key);
    }

    return 0;
}

