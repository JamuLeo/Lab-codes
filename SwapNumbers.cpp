
//Demonstrating by function arguments by reference using references

  #include <iostream>
    using namespace std;

    void swapNumbers(int &varA,int &varB);

    int main(){

        int varA=25;
        int varB=100;

        cou<<"varA before swap: ">>varA<<endl;
        cout<<"varB before swap: ">>varB<<endl;

    SwapNumbers(VarA,varB);

        cout<<"varA afrer swap: "<<VarA<<endl; 
        cout<<"varB after swap: "<<varB<<endl;
        return 0;
    }

    void swapNumbers(int &varA,int &varB){

    int temp;

    cout<<"swap,before swap varA:"<<varA<<" varB: "<<varB<<endl;

        temp=varA;
        varA=varB;
        varB=temp;

    cout<<"swap,after swap varA:"<<varA<<" varB: "<<varB<<endl;

    }