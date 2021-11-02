#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){

string myflag;
ifstream myfile;
myfile.open("flag");
getline(myfile,myflag);
myfile.close();

for(int i=0;i<myflag.length();i++){
cout<<int(myflag[i])<<endl;
}
cout<<endl;


return 0;}
