#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[6] = {10, 5, 10, 15, 10, 5}, count = 0;
    unordered_map<int, int> mp;
    for(int i = 0; i < 6; i++) {
        mp[arr[i]]++;
    }

    pair<int, int> maxFreq, minFreq;
    minFreq.second = INT_MAX;
    for(auto x : mp) {
        if(maxFreq.second != max(x.second, maxFreq.second)) {
            maxFreq.second = x.second;
            maxFreq.first = x.first;
        }

        if(minFreq.second != min(x.second, minFreq.second)) {
            minFreq.second = x.second;
            minFreq.first = x.first;
        }
    }
    cout<<"Max Frequency: "<<maxFreq.first<<" "<<maxFreq.second<<endl;
    cout<<"Min Frequency: "<<minFreq.first<<" "<<minFreq.second<<endl;

    return 0;
}