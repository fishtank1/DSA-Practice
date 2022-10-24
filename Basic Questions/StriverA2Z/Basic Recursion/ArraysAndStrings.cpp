#include <bits/stdc++.h>
using namespace std;
void reverseArr(int *arr, int i,  int n) {
    if(i == n / 2) {
        return;
    }
    int temp = arr[i];
    arr[i] = arr[n - (i + 1)];
    arr[n - (i + 1)] = temp;

    reverseArr(arr, i + 1, n);
}

bool palindrome(string word, int i) {
    if(i == word.length() / 2) {
        return true;
    }

    if(word[i] != word[word.length() - (i + 1)]) {
        return false;
    }

    return palindrome(word, i + 1);
}

int main() {
    int arr[5] = {1 , 2, 3, 4, 5};
    cout<<"Reverse Array: "<<endl;
    reverseArr(arr, 0, 5);
    for(int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Reverse Array: "<<endl;
    string word = "malaylam";
    if(palindrome(word, 0)) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}