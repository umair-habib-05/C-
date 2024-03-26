//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
int main(){
	int avg, i, sum=0;
	int marks[30];
	for(i=0; i<=29; i++){
		cout<<"Enter Marks: "; 
		cin>>marks[i];
	}
	for(i=0; i<=29; i++){
		sum = sum+marks[i];
	}
	
	avg = sum/30;
	cout<<"Average of Marks: "<<avg;
	return 0;
}
