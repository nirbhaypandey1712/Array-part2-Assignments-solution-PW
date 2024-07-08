/*Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x? */

#include <iostream>
#include <vector>
using namespace std;

int count_unique_pairs(vector<int>& arr, int n, int x) {
    int count = 0;
    int left = 0, right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if(sum == x) {
            count += 1;
            left += 1;
            right -= 1;

            while (left < right && arr[left] == arr[left - 1]) {
                left += 1;
            }
            while (left < right && arr[right] == arr[right + 1]) {
                right -= 1;
            }
            }
             else if (sum < x) {
                left += 1;
        }
        else {
            right -= 1;
        }
    }
    return count;
}

int main () {
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "The number of unique pairs is: " << count_unique_pairs(arr, n, x) << endl;
    return 0;
}