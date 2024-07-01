#include<iostream>
using namespace std;


class constructor{
    public :

    constructor(int x){
        cout<<x<<endl;
    }
    constructor(int x,int y){
        cout<<x<<endl<<y<<endl;
    }

};


int main(){

    constructor t1(3);


    return 0;

}