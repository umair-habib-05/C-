//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
int main(){
	string letters[2][2][2] = {
	{
		{"a", "b"}, {"c", "d"}},
	{
		{"e", "f"}, {"g", "h"}}
	};
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				cout<<letters[i][j][k]<<endl;
			}
		}
	}
}
