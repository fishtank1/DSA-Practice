#include<bits/stdc++.h>
using namespace std;

void printArr(int* arr, int n) {
    if(n == 0) {
        cout<<arr[n]<<" ";
        return;
    }
    printArr(arr, n - 1);
    if(n != 17) {
        cout<<arr[n]<<" ";
    }
}

void mergeArr(int* arr, int si, int mid, int ei){
    // cout<<si<<" "<<mid<<" "<<ei<<endl;
    int temp[ei + 1] = {0};
    int i = si, j = mid + 1, f = si, itr = 0;
    
    while(i <= mid && j <= ei) {
        if(arr[i] < arr[j]) {
            temp[itr++] = arr[i++];
        } else {
            temp[itr++] = arr[j++];
        }
    }

    while(i <= mid) {
        temp[itr++] = arr[i++];
    }

    while(j <= ei) {
        temp[itr++] = arr[j++];
    }

    itr = 0;
    while(f <= ei) {
        arr[f++] = temp[itr++];
    }
}

void mergeSort(int* arr, int si, int ei){
    if(si == ei) {
        return;
    }
    int mid = (si + ei) / 2;
    mergeSort(arr, si, mid);
    mergeSort(arr, mid + 1, ei);
    mergeArr(arr, si, mid, ei);
}

int main() {
    int arr[17] = {6334, 4098, 7968, 4523, 277, 6956, 4560, 2062, 5705, 5743, 879, 5626, 9961, 491, 2995, 741, 4827};
    mergeSort(arr, 0, 17 - 1);  
    printArr(arr, 17);
    cout<<endl;

    return 0;
}