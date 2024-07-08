/*Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x.*/

#include <iostream>
using namespace std;

pair <int, int> findPairWithSum(int arr[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];
        if (currentSum == x) {
            return make_pair(arr[left], arr[right]);
        }
        else if (currentSum < x) {
            left++;
        }
        else {
            right--;
        }
    }
    return make_pair(-1, -1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    pair <int, int> result = findPairWithSum(arr, n, x);

    if (result.first != -1 && result.second != -1) {
        cout << "Pair found. (" << result.first << ", " << result.second << ")" << endl;
    }
    else{
        cout << "Pair not found." << endl;
    }
    return 0;
}