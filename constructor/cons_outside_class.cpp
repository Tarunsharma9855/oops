#include<iostream>
using namespace std;

class constructor{
    int t=8;
    public:
    constructor();
    void function();


};
constructor::constructor(){
    cout<<"hello"<<endl;
    cout<<"hello2"<<endl;

}
void constructor :: function(){
    cout<<"function"<<endl;
}


int main(){
    cout<<"hello"<<endl;
    constructor c1;
    c1.function();

    return 0;

}