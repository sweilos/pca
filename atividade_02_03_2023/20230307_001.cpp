#include <stdio.h>

void printvet(float *first, float *last){
    for(; first<=last; first++){
        printf("%f\n", *first);
    }
    printf("\n");
}
int main(){
    float nums1[5] = {1.7, 2.5, 3.6, 6.2, 7.9};
    float nums2[4] = {9.9, 12.3, 4.6, 0.9};
    float nums3[2] = {3.14, 2.57};

    printvet(&nums1[0], &nums1[4]);
    printvet(&nums2[0], &nums2[3]);
    printvet(&nums3[0], &nums3[1]);
}

//
// Created by yago2 on 3/23/2023.
//
