//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
int main(){
	int i=3, *x;
	float j=1.5, *y;
	char k='c' ;
	char *z;
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<k<<endl;
	
	x=&i;
	y=&j;
	z=&k;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	
	x++;
	y++;
	z++;
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<z<<endl;
	
	return 0;
}
