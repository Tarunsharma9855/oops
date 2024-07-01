#include <iostream>
using namespace std;
static int count = 0;  

class tarun{
    public :
    tarun(){
        count++;
        cout<<"constructor :"<<count<<endl;
    }
    ~tarun(){
        count--;
        cout<<"destructor  :"<<count<<endl;
    }

};
int main(){

    tarun t1,t2,t3,t4;



    return 0;
}