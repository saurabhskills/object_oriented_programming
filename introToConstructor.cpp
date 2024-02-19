#include<iostream>
using namespace std;

class Test {
    private:
    int n;
    
    public:
    Test(){
        n = 100;
    }
    
    void incr();
    void display();
};

void Test::incr(){
    ++n;
}

void Test::display(){
    cout<<n;
}


int main(){
    Test t1,t2; //Inplicit call
    
    t1.incr(); //Explicit call
    t1.incr();
    t1.incr();
    //We have called the increment function 3 times so now n should be 103.
    cout<<"The value of n for object 1: "<<endl;
    
    t1.display();
    
    
    //We have not call the increment function here so here n should be equal to 100 as set by the constructor.
    cout<<"\nThe value of n for object 2: "<<endl;
    
    t2.display();
    
    //different values of n for both the object shows that they have allocated different memory location.
    
    
    
    
    return 0;
}
