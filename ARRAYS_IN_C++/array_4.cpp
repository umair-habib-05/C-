//Developed By:
//			Muhammad Umair Habib

#include<iostream>
using namespace std;
void disp(int *);
void show(int *);
int main(){
	int i;
	int marks[] = {5, 8, 7, 4, 6, 9};
	for(i=0; i<6; i++){
		disp(&marks[i]);
	}
	return 0;
}

void disp(int *n){
	show(n);
}

void show(int *n){
	cout<<*n<<endl;
}
