//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
int main(){
	bool ships[4][4] = {
		{0, 1, 1, 0},
		{0, 0, 0, 0},
		{0, 0, 1, 0},
		{0, 0, 1, 0},
	};
	
	int hits = 0;
	int numberofturns = 0;
	
	while(hits<4){
		int row, col;
		cout<<"Selecting Coordinates"<<endl;
		
		cout<<"Choose a row number between 0 and 3: ";
		cin>> row;
		
		cout<<"Choose a column number between 0 and 3: ";
		cin>> col;
		
		if(ships[row][col]){
			ships[row][col] = 0;
			hits++;
			cout<<"Hit !"<<(4-hits)<<"left.\n\n";
		}
		else{
			cout<<"Miss\n\n";
		}
		numberofturns++;
	}
	
	cout<<"Victory!"<<endl;
	cout<<"You Won in"<<numberofturns<<"turns";
	
	return 0;
}
