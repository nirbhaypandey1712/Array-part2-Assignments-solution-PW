/*Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.*/

#include <iostream>
using namespace std;

int main() {
    int arr1[5] = {1, 3, 5, 7, 9};
    int arr2[5] = {2, 4, 6, 8, 10};
    int arr3[10];
    int i = 0, j = 0, k = 0;
    while (i < 5 && j < 5) {
        if (arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < 5) {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < 5) {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }

    return 0;
}