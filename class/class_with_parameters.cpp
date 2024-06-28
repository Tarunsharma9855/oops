#include<iostream>
using namespace std;

class function{
    public:
    double bmi(double height,double weight){
        return weight/(height*height);
    }

};

int main() {
    function f1;
   double k= f1.bmi(1.76,82);
   cout<<k;
    return 0;
}