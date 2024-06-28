#include<iostream>
using namespace std;

class constructor{
    int k=5;
    int t=9;

    public:
    constructor(){
        cout<<"hello constructor"<<endl;
    }
    void function(){
        cout<<"k"<<endl;

    }

};





int main(){
    cout<<"hello"<<endl;

    constructor cons;
    cons.function();


    return 0;
}