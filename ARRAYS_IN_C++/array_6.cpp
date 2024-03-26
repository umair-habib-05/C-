//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
int main(){
	int arr[] = {10, 20, 30, 45, 67, 56, 74};
	int *i, *j;
	
	i=&arr[1];
	j=&arr[5];
	cout<<j-i<<endl;
	cout<<*j<<endl;
	cout<<*i<<endl;
	return 0;
}
