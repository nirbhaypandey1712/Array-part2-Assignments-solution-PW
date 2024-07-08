/*Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101.*/

#include <iostream>
#include <vector>
using namespace std;

void squareAndSort(vector<int> &arr, int n) {
    vector<int> result(n);
    int i = 0, j = n - 1, k = n - 1;
    while (i <= j) {
        if (arr[i] * arr[i] < arr[j] * arr[j]) {
            result[k] = arr[j] * arr[j];
            j--;
        } else {
            result[k] = arr[i] * arr[i];
            i++;
        }
        k--;
    }
    // Copy the result back into arr
    arr = result;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    squareAndSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
