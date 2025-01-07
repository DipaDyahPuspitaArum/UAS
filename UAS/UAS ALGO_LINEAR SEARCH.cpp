#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 7, 9};  // Data harus terurut
    int n = 5, target = 7;
    int result = binarySearch(arr, n, target);
    if (result != -1) {
        cout << "Target ditemukan pada indeks: " << result << endl;
    } else {
cout << "Target tidak ditemukan." << endl;
}
    return 0;
}
