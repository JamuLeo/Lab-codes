
/*
ifstream c++ file lib reads an already existing file ie. example.txt
getting all the contents & reading from our file
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

string line;
//reading to file
ifstream myfile; //declaring ifstream object
myfile.open("example.txt",ios::in );

//writing to a file
if(myfile.is_open()){
while(getline(myfile,line)){ //getline() reads the current line 
    cout<<line<<"\n";
}
myfile.close();
}
else
cout<<"ERROR...!"<<endl;

    return 0;
}