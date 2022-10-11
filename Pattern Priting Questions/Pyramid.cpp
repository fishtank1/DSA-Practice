#include <bits/stdc++.h>
using namespace std;

int main() {
	int i = 0, row = 0, col = 0;
	// Pyramid With Space
	cout<<"Pyramid With Space:"<<endl;
	i = 0; row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col < 5 - row) {
				cout<<" ";
			} else {
				cout<<"* ";
			}
			col++;
		}
		cout<<endl;
		row++;
	}


	// Pyramid Without Space
	cout<<"Pyramid Without Space:"<<endl;
	i = 0; row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col < 5 - row) {
				cout<<" ";
			} else {
				i = 0;
				while(i < row + row - 1) {
					cout<<"*";
					i++;
					col++;
				}
			}
			col++;
		}
		cout<<endl;
		row++;
	}

	// Reversed Pyramid Star Pattern
	cout<<endl<<"Reversed Pyramid Star Pattern:"<<endl;
	row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col < row) {
				cout<<" ";
			} else {
				cout<<"* ";
			}
			col++;
		}
		row++;
		cout<<endl;
	}
return 0;
}