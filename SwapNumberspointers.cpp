
//demonstrating passing function arguments using references using pointers
#include <iostream>
using namespace std;
   void swapNumbers(int *varA,int *varB);
int main() {
    
     int varA=25;
        int varB=100;

        cout<<"varA before swap: "<<varA<<endl;
        cout<<"varB before swap: "<<varB<<endl;

       swapNumbers(&varA , &varB);

        cout<<"varA afrer swap: "<<varA<<endl; 
        cout<<"varB after swap: "<<varB<<endl;
        return 0;
}

  void swapNumbers(int *varA,int *varB){

    int temp;
    temp=*varA;
    *varA=*varB;
    *varB=temp;

cout<<"swap,after swap varA:"<<*varA<<" varB: "<<*varB<<endl;
}
