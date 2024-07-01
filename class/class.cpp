#include<iostream>
using namespace std;
class employee {
    public:
     void first(){
        cout<<"hello"<<endl;
     }
     void  second(){
        cout<<"hello2"<<endl;
     }
};

class employee2{
    public :
     void third(){
        cout<<"hello third"<<endl;
        cout<<"hello fourth"<<endl;
     }
};

int main(){
    employee t;
    employee2 s;
    t.first();
    s.third();
    return 0;
}