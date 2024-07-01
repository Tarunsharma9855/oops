#include<iostream>
using namespace std;

class tarun{
    int x;
    int y;
    public :
    tarun(int a,int b){
        x=a;
        y=b;
    }
    tarun ( tarun & ref){
        x=ref.x;
        y=ref.y;
    }
    void show(){
        cout<<x<<endl<<y<<endl;
    }


};

int main(){
    tarun t1(3,4);
     t1.show();
     tarun t2=t1;
     t2.show();
    return 0;

}