#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size) {
    for (int step = 0; step < size - 1; step++) {
        int min_idx = step;
        for (int i = step + 1; i < size; i++) {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}

int main() {
    int vet[] = {70, 90, 1, 3, 0, 100, 2};
    int size = sizeof(vet) / sizeof(vet[0]);
    selectionSort(vet, size);
    printf("Vetor ordenado:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d  ", vet[i]);
    }

}
//
// Created by yago2 on 2/14/2023.
//
