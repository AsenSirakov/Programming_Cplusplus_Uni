#include <iostream>
#include <windows.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int EnterNumbers(int numbers[3][3]){
	 numbers[3][3];
	for(int i = 1; i < 4; i++){
	for(int j = 1; j < 4; j++){
		cout<<"Enter number["<<i<<"]"<<"["<<j<<"]:";
		cin>>numbers[i][j];
	}
}
cout<<endl;
cout<<"3x3 Matrix:";
    for (int i = 1; i < 4; i++)
    {
        cout << endl;
        for (int j = 1; j < 4; j++)
        {
            cout << numbers[i][j] << " ";
        }
    }
}
void PrintRows(int numbers[3][3]){
	numbers[3][3];
	bool isTrue = false;
	for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j < 4; j++)
        {
           if(numbers[i][j] == 0){
           	cout<<"There is a 0 on row: "<<i<<endl;
           	isTrue = true;
		   } 		   		   
        }
    }
    if(isTrue == false){
    	cout<<endl;
    	cout<<"There isn't a 0 in any of the rows!";
	}
}

int main(int argc, char** argv) {
	int numbers[3][3];
	EnterNumbers(numbers);
	cout<<endl;
	PrintRows(numbers);
	return 0;
}

