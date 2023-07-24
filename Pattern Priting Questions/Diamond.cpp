#include <bits/stdc++.h>
int main() {
	cout<<"Diamond Shape Pattern Program"<<endl;
	i = 0; row = 0; col = 0; 
	int r = 3;
	while(row < 5) {
		if(row <= 5 / 2) {
			col = 0; i = 0;
			while(col < 5) {
				if(col < 5 - (row + (5 / 2) + 1)) {
					cout<<" ";
				} else {
					while(i < row + (row + 1)) {
						cout<<"*";
						i++; col++;
					}
				}
				col++;
			}
		} else {
			col = 0; i = 0;
			while(col < 5) {
				if(col < (row - (5 / 2))) {
					cout<<" ";
				} else {
					while(i < r) {
						cout<<"*";
						i++; col++;
					}
				}
				col++;
			}

			r -= 2;
		} 
		row++;
		cout<<endl;
	}
//c
	return 0;
}
