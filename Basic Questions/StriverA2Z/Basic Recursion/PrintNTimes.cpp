#include<bits/stdc++.h>
using namespace std;

void printNTimes(int n) {
    if(n == 0) {
        cout<<"Something"<<endl;    
        return;
    }
    cout<<"Something"<<endl;    
    printNTimes(n - 1);
}

void printNameNTimes(int n, string name) {
    if(n == 0) {
        cout<<name<<endl;
        return;
    }
    cout<<name<<endl;
    printNameNTimes(n - 1, name);
}

void print1ToN(int n) {
    if(n == 0) 
        return;
    print1ToN(n - 1);
    cout<<n<<endl;
}

void printNTo1(int n) {
    if(n == 0) {
        return;
    }
    cout<<n<<endl;
    printNTo1(n - 1);
}

int sumOfFirstNNumbers(int n) {
    if(n == 0) {
        return n;
    }

    return sumOfFirstNNumbers(n - 1) + n;
}

int factorial(int n) {
    if(n == 1) {
        return n;
    }
    return n * factorial(n - 1);
}

int main() {
    int n = 0;
    string name;
    cin>>n>>name;
    cout<<"Print N Times"<<endl;
    printNTimes(n);
    cout<<endl<<"Print name N Times"<<endl;
    printNameNTimes(n, name);
    cout<<endl<<"Print 1 to N"<<endl;
    print1ToN(n);
    cout<<endl<<"Print N to 1"<<endl;
    printNTo1(n);
    cout<<endl<<"Print sum of first n numbers \n"<<sumOfFirstNNumbers(n)<<endl;
    cout<<endl<<"Factorial of N numbers \n"<<factorial(n)<<endl;    
    return 0;
}