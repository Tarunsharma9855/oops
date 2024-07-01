#include<iostream>
using namespace std;

class tarun{
public :
    tarun(){
        cout<<"constructor"<<endl;
    }
    void hello(){
        cout<<"hello"<<endl;
    }
    ~tarun(){
        cout<<"program end's here"<<endl;

    }
};

int main(){
    tarun t1;
    t1.hello();

    return 0;
}