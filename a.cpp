#include<iostream>
#include <cstdlib> 
#include<fstream>
#include<string>
using namespace std;
int main() {
	cout << "can you finish 1000 formulas?"<<endl;
	string myflag;
	ifstream myfile;
	myfile.open("flag");
	srand(time(NULL));
	char op[3] = { '+','-','x'};
	int x,y,o,ans,que;
	for (int i = 0; i < 1000; i++) {
		x = rand()%100;
		y = rand()%100;
		o = rand()%3;
		cout << x << op[o] << y << " =? " << endl;
		switch (op[o])
		{
		case '+':
			que = x + y;
			break;
		case '-':
			que = x - y;
			break;
		case 'x':
			que = x * y;
			break;
		default:
			break;
		}
		cin >> ans;
		if (que != ans) {
			cout << "Bye" << endl;
			return 0;
		}
	}
	getline(myfile,myflag);
	myfile.close();
	cout << "here is flag:"<<myflag << endl;
	return 0;
}
