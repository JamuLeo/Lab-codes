    #include <iostream>
    using namespace std;

    int main(){

    enum Days{monday,tuesday,wednesday,thursday,friday};

    int x;
    Days name;

    cout<<"Which day would you prefer(0-6)"<<endl;
    cin>>x;
    name=Days(x); //converting int to enum type

    if (name == monday|| name== tuesday)
    cout<<"These are working days"<<endl;

    else if (name == thursday || name==friday)
    cout<<"Wait for the weekend please"<<endl;
    else
    cout<<"You are already on weekend"<<endl;
    return 0;
    }