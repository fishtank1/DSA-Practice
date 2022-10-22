#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, ans = 0, temp = 0;
    cin>>n;
    temp = n;
    cout<<"Count number of digits: ";
    while(n != 0) {
        ans++;
        n /= 10;
    }
    cout<<ans<<endl;

    cout<<"Check Armstrong Number: ";
    int digits = ans;
    n = temp; ans = 0;
    while(n != 0) {
        int pow = 0, res = 1;
        while(pow < digits) {
            res *= n % 10;
            pow++;
        }
        ans += res;
        n /= 10;
    }

    if(ans == temp) {
        cout<<"Is Armstrong"<<endl;
    } else {
        cout<<"Not Armstrong"<<endl;
    }

    cout<<"Reverse the number: ";
    n = temp; ans = 0;
    while(n != 0) {
        ans = (ans * 10) + n % 10;
        n /= 10;
    }
    cout<<ans<<endl;

    cout<<"Check Palindrome: ";
    if(temp == ans) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }

    cout<<"Print all Divisors: ";
    n = temp; ans = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    cout<<"Check number prime or not: ";
    n = temp;
    for(int i = 4; i <= n; i++) {
        if(n % i == 0) {
            ans == false;
            cout<<"Not prime!"<<endl;
            break;
        } 
    }
    if(ans) 
        cout<<"Is prime!"<<endl;
    
    cout<<"GCD of two numbers"<<endl;
    n = temp; ans = 0;
    int num1 = n, num2 = 0;
    cin>>num2;
    int limit = min(num1, num2), i = 2;
    while(i <= limit) {
        if((num1 % i == 0) && (num2 % i == 0)) {
            ans = i;
        }
        i++;
    }
    cout<<ans;
    return 0;
}