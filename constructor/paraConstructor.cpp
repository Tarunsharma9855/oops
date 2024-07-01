#include<iostream>
using namespace std;

class cons{
    public:
    cons(){
        cout<<"helllo"<<endl;
        cout<<"hello2"<<endl;
    }
    cons(int x){
        cout<<"hello function"<<endl;
    }
    void cons1(int x){
        cout<<x;

    }

};

int main(){
        cons f2(21);
    cons f1;



    return 0;

}