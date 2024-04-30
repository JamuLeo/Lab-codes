#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
 char data[40];   
int fnum,snum,results;
ofstream file3;
file3.open("file4.txt",ios::out);
cout<<"enter a number:";
cin.getline(data,40);

file3<<"you have entered fnum:"<<data;

cout<<"enter a second number:";
cin>>data;
file3<<"\nyou have entered snum:"<<data;
cin.ignore();

ifstream file3;
file3.open("file4.txt");

file3>>data;
cout<<data;

file3>>



    return 0;
}