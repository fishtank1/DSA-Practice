#include <bits/stdc++.h>
using namespace std;

int main() {
	// Right Ladder
	cout<<"Right Ladder:"<<endl;
	int row = 0, col = 0;
	// Ladder
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col <= row) {
				cout<<"* ";
			} else {
				cout<<" ";
			}
			col++;
		}
		cout<<endl;
		row++;
	}
	cout<<endl;

	// Left Ladder
	cout<<"Left Ladder:"<<endl;
	row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col <= row) {
			cout<<"* ";
			col++;
		}
		row++;
		cout<<endl;
	}
	cout<<endl;

	//Downwards Triangle Star Patter 
	cout<<"Downwards Triangle Star Patter:"<<endl;
	row = 0; col = 0;
	while(row < 5) {
		col = row;
		while(col < 5) {
			cout<<"* ";
			col++;
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Mirrored Right Triangle Star Program:"<<endl;

	row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col >= 5 - row - 1) {
				cout<<"*";
			} else {
				cout<<" ";
			}
			col++;
		}
		row++;
		cout<<endl;
	}
	
	cout<<endl<<"Right down Mirror Star Pattern:"<<endl;
	row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col < row) {
				cout<<" ";
			} else {
				cout<<"*";
			}
			col++;
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Right Pascal's Triangle:"<<endl;

	row = 0; col = 0;
	while(row <= 10) {
		(row <= 10 / 2) ? (col = 0) : (col = row); 
		while(col <= 10) {
			if(row <= 10/2) {
				if(col <= row) {
					cout<<"* ";
				}
			} else {
				cout<<"* ";
			}
			col++;
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Left Pascal's Triangle:"<<endl;

	row = 0; col = 0;
	while(row < 10) {
		col = 0;
		if(row < 10 / 2) {
			while(col < 5) {
				if(col >= 5 - row - 1) {
					cout<<"*";
				} else {
					cout<<" ";
				}
				col++;
			}
		} else {
			while(col < 5) {
				if(col < (row + 1) - 5) {
					cout<<" ";
				} else {
					cout<<"*";
				}
				col++;
			}
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Sunglass Star Pattern:"<<endl;

	row = 0; col = 0;
	while(row < 10) {
		col = 0;
		while(col < 5) {
			col++;
		}
		row++;
		cout<<endl;
	}
	return 0;
}