#include <bits/stdc++.h>
using namespace std;

int main() {
    cout<<"Odd Pattern: "<<endl;
    int n = 0, row = 0, col = 0;
    cin>>n;
    int print = 0;
    while(row < n) {
        col = 0;
        print = row + (row + 1);
        while(col < n - row) {
            cout<<print;
            col++;
            print += 2;
        }
        
        col = 0;
        print = 1;
        while(col < row) {
            cout<<print;
            print += 2;
            col++;
        }
        row++;
        cout<<"\n";
    }

    cout<<endl<<"Sum Pattern: "<<endl;
    n = 0; col = 1; row = 1;
    cin>>n;
    while(row <= n) {
        col = 1;
        int sum = 0;
        while(col <= row) {
            cout<<col;
            if(col != row) {
                cout<<"+";
            } else {
                cout<<"=";
            }
            sum += col;
            col++;
        }
        cout<<sum<<endl;
        row++;
    }

    cout<<endl<<"Parallelogram Pattern: "<<endl;
    n = 0; row = 0; col = 0;
    cin>>n;
    while(row < n) {
        col = 0;
        while(col < row) {
            cout<<" ";
            col++;
        }
        col = 0;
        while(col < n) {
            cout<<"*";
            col++;
        }
        row++;
        cout<<"\n";
    }


    cout<<endl<<"Half Diamond Pattern: "<<endl;
    n = 0; row = 0; col = 0; 
    int constrain = 0, printCap = 0;
    cin>>n;
    
    if(n == 0) {
        cout<<"*"<<endl<<"*";
    } else {
        n = (n * 2) + 1;
    }
    
    while(row < n) {
        col = 0;
        int print = 1;
        if(row <= n / 2) {
            col = 0;
            while(col < row + (row + 1)){
                if(col == 0 || col == (row + (row + 1)) - 1) {
                    cout<<"*";
                }
                else {
                    cout<<print;
                    if(col < ((row + (row + 1)) / 2)) {
                        print++;
                    } else {
                        print--;
                    }
                }
                col++;
            }
            constrain = row + (row + 1);
            printCap = row;
        }
        else {
            col = 0;
            while(col < constrain - 2){
                if(col == 0 || col == constrain - 3) {
                    cout<<"*";
                }
                else {
                    cout<<print;
                    if(col < ((constrain - 2) / 2)) {
                        print++;
                    } else {
                        print--;
                    }
                }
                col++;
            }
            constrain -= 2; printCap -= 1;
        }
        row++;
        cout<<"\n";
    }

    cout<<endl<<"Diamond of Star Pattern: "<<endl;
    n = 0; row = 0; col = 0;
    cin>>n;
    while(row < n) {
        if(row <= (n / 2)) {
            col = 0;
            while(col <= ((n / 2) - (row + 1))) {
                cout<<" ";
                col++;
            }
            
            col = 0;
            while(col < row + (row + 1)) {
                cout<<"*";
                col++;
            }
        } else {
            col = 0;
            while(col < ((row + 1) - (n / 2) - 1)) {
             	cout<<" ";   
                col++;
            }
            
            col = 0;
            while(col < (n - row) + (n - (row + 1))) {
                cout<<"*";
                col++;
            }
        }
        row++;
        cout<<"\n";
    }

    cout<<endl<<"Triangle of Numbers: "<<endl;
    n = 0; row = 0; col = 0;
    cin>>n;
    while(row < n) {
        col = 0;
        while(col < n - (row + 1)) {
            cout<<" ";
            col++;
        }
        
        col = 0;
        int print = row + 1;
        while(col < row + (row + 1)) {
            cout<<print;
            if(col < (row + (row + 1)) / 2) {
                print++;
            } else {
                print--;
            }
            col++;
        }
        
        row++;
        cout<<"\n";
    }

    cout<<endl<<"Star Pattern: "<<endl;
    n = 0; col = 0; row = 0;
    cin>>n;
    while(row < n) {
        col = 0;
        while(col < n - (row + 1)) {
            cout<<" ";
            col++;
        }
        col = 0;
        while(col < (row + row + 1)) {
            cout<<"*";
            col++;
        }
        row++;
        cout<<"\n";
    }

    return 0;
}