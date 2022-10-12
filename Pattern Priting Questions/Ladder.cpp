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
		if(row < 10 / 2) {
			while(col < 5) {
				if(col < row) {
					cout<<" ";
				} else {
					cout<<"* ";
				}
				col++;
			}
		} else {
			while(col < 5) {
				if(col < 10 - (row + 1)) {
					cout<<" ";
				} else {
					cout<<"* ";
				}
				col++;
			}
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Alphabet A Pattern:"<<endl;

	row = 0; col = 0;
	while(row < 5) {
		col = 0;
		while(col < 3) {
			if(row == 0) {
				if(col <= 1) {
					cout<<"*";
				} 
			}
			else if(row == 5 / 2) {
				cout<<"*";
			}
			else {
				if((col == 0 || col == 2) && (row != 0)) {
					cout<<"*";
				} else {
					cout<<" ";
				}
			}
			col++;
		}
		row++;
		cout<<endl;
	}
	cout<<endl<<"Triangle Star Pattern:"<<endl;

	row = 0; col = 0;
	int i = 0;
	while(row < 5) {
		col = 0;
		while(col < 5) {
			if(col == (5 - (row + 1))) {
				i = 0;
				while(i < row + (row + 1)) {
					if(i == 0 || i == (row + (row + 1)- 1)) {
						cout<<"*";
					} else if(row == 4) {
						cout<<"*";
					}
					else {
						cout<<" ";
					}
					i++; col++;
				}
			} else {
				cout<<" ";
			}
			col++;
		}
		row++;
		cout<<endl;
	}

	cout<<"\nDownwards Triangle Star Pattern:"<<endl;

	col = 0; row = 5;
	int space = 0, constrain = 0;
	while(row > 0) {
		col = 0; constrain = row + (row - 1);
		while(col < constrain+space) {
			if(row == 5) {
				cout<<"*";
			}
			else if(col < space) {
				cout<<" ";
			}
			else {
				if(col == space || col == constrain+space-1) {
					cout<<"*";
				} else {
					cout<<" ";
				}
			}
			col++;
		}
		row--; space++;
		cout<<endl;
	}

	return 0;
}