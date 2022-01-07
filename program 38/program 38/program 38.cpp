#include <iostream>
#include <string>
using namespace std;

int main()
{
	int num;
	int& rNum = num;

	cout << "Please input a number" << endl;
	cin >> rNum; //Input Number
	cout << rNum << endl; //Output value 
	rNum += 25; //Add 25
	cout << rNum << endl; //Output Number +25

	cout << "Please input another number" << endl;
	cin >> rNum;
	cout << rNum << endl;
	rNum -= 25;
	cout << rNum << endl;

}

