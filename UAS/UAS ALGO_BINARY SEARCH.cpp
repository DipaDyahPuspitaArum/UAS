#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> arr1, vector<int> arr2) {
    int i = 0, j = 0;
    vector<int> merged;

    // Bandingkan elemen dan tambahkan ke array hasil
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            merged.push_back(arr1[i]);
            i++;
        } else {
            merged.push_back(arr2[j]);
            j++;
        }
    }

    // Tambahkan elemen yang tersisa
    while (i < arr1.size()) {
        merged.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        merged.push_back(arr2[j]);
        j++;
	 }

    return merged;
}

int main() {
    vector<int> array1 = {1, 3, 5, 7};
    vector<int> array2 = {2, 4, 6, 8};
    
    vector<int> result = mergeSortedArrays(array1, array2);

    cout << "Array yang digabung: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
