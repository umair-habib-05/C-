//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
void dis(int *);
int main(){
	int i;
	int marks[]={55, 65, 75, 56, 78, 78, 90};
	for(i=0; i<=6; i++){
		dis(&marks[i]);
	}
	return 0;
}

void dis(int *n){
	cout<<*n<<endl;
}
