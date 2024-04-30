/*
ofstream creates a file  and writes data to it.
*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){

//create and open a text file
ofstream myfile; //declaring offstream object
myfile.open("example.txt",ios::out);
//int num;
//writing to a file
if(myfile.is_open()){
myfile<<"Hello My File.!"<<endl;
myfile.close();
}
else
cout<<"ERROR...!"<<endl;

    return 0;
}