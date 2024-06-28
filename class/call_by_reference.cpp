#include<iostream>
using namespace std;

class call_by_refernce{
    public:
    void function( int &x, int &y){
        int t=x;
        x=y;
        y=t;
        cout<<"x"<<" :"<<x<<endl;
        cout<<"y"<<" :"<<y<<endl;

    }
};



int main(){
    int x=7;
    int y=8;
    cout<<"x"<<" :"<<x<<endl;
    cout<<"y"<<" :"<<y<<endl;
    call_by_refernce f1;
    f1.function(x,y);
    cout<<"x"<<" :"<<x<<endl;
    cout<<"y"<<" :"<<y<<endl;
    return 0;
}