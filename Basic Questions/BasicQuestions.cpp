#include<bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Check Palindrome Number, without Arrays"<<endl;
    int n = 0, temp = 0, reverseNum = 0;
    cin>>n;
    temp = n;

    while(temp != 0) {
        reverseNum = (reverseNum * 10) + temp % 10;
        temp /= 10;
    }

    if(reverseNum == n) {
        cout<<"Is Palindrome."<<endl;
    } else {
        cout<<"Is not a Palindrome."<<endl;
    }

    cout<<endl<<"Check Arithmetic Progression"<<endl;
    int curr = 0, prev = 0;
    cin>>n>>prev>>curr;
    int ap = curr - prev;
    bool isAP = true;
    while(n != 2) {
        int check = curr + ap;
        cin>>curr;
        if(check != curr) {
            isAP = false;
        } 
        n--;
    }
	if(isAP) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }

    cout<<endl<<"Number Star pattern 1"<<endl;
    int col = 0, row = 0;
    cin >> n;
    while(row < n) {
        col = 0; temp = n;
        while(col < n) {
            if(col == (n - row) - 1) {
                cout<<"*";
            } else {
                cout<<temp;
            }
            temp--;
            col++;
        }
        cout<<endl;
        row++;
    }


    cout<<endl<<"Number Star pattern 2"<<endl;
    int col = 0, row = 0;
    cin >> n * 2;
    while(row < n) {
        col = 0;
        while(col < n) {
            if(col >= n - row)
                cout<<"*";
            else 
                cout<<col + 1;
            col++;
        } 
        
        col = 0;
        while(col < n) {
            if(col < row) {
                cout<<"*";
            } else {
                cout<<n - col;
            }
            col++;
        }
        
        cout<<endl;
        row++;
    }

    return 0;
}