#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {10, 5, 10, 15, 10, 5}, count = 0;
    // METHOD 1
    cout<<"ARRAY METHOD"<<endl;
    vector<bool> checked = {false};
    
    for(int i = 0; i < 6; i++) {
        if(checked[i] == true) 
            continue;
        
        int count = 1;
        for(int j = i + 1; j < 6; j++) {
            if(arr[i] == arr[j]) {
                checked[j] = true;
                count++;
            }
        }

        cout<<arr[i]<<" "<<count<<endl;
    }

    cout<<endl<<"MAP METHOD"<<endl;
    // METHOD 2
    unordered_map<int, int> mp;
    for(int i = 0; i < 6; i++) {
        mp[arr[i]]++;
    }

    for(auto x : mp) {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}