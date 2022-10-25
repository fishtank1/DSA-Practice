#include<bits/stdc++.h>
using namespace std;

void selectionSort(int* arr, int n) {
    int minVal = 0, minIndx = 0;
    for(int i = 0; i < n; i++) {
        minVal = arr[i]; minIndx = i;
        for(int j = i + 1; j < n; j++) {
            if(minVal != min(minVal, arr[j])) {
                minVal = arr[j];
                minIndx = j;
            }
        }
        int temp = arr[i];
        arr[i] = minVal;
        arr[minIndx] = temp;
    }
}

void bubbleSort(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int* arr, int n) {
    if(n == -1)
        return;
    printArray(arr, n - 1);
    if(n != 6)
        cout<<arr[n]<<" ";
}

void insertionSort(int* arr, int n) {
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            int temp = arr[i], j = i;
            while(temp < arr[j - 1] && j != 0) {
                arr[j] = arr[j - 1];
                j--;
            }
            arr[j] = temp;
        }
    }
}

int main() {
    int arr[6] = {9, 7, 3, 5, 1, 2};
    insertionSort(arr, 6);
    printArray(arr, 6);
    cout<<endl;
    
    
    return 0;
}