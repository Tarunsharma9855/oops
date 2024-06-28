#include<iostream>
using namespace std;

class call_by_value{
    public:
    void function(int x,int y){
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
    call_by_value f1;
    f1.function(x,y);
     cout<<"x"<<" :"<<x<<endl;
     cout<<"y"<<" :"<<y<<endl;
    return 0;
}