#include<iostream>
using namespace std;
class student {
    private: 
    char name[30];
    int roll, regNo;
    
    public:
    void getdata();//method declaration
    void putdata();
};

class person{
    private:
    char name[30];
    char gender[10];
    
    public:
    void putdata(){
        cout<<"Enter your name: ";
        cin.getline(name,30);
        cout<<"Enter your gender: ";
        cin>>gender;
    }
    void getdata(){
        cout<<"The name of the person is: "<<name<<endl;
        cout<<"The gender of the person is: "<<gender<<endl;  
    }
    
};

//We have two ways to define the methods of a class.
//Either we can declare and define the methods in the class itself.(example see in the class person )
//Or we can define the method outside the class.


void student :: getdata(){
    cout<<"The name of the student is: "<<name<<endl;
    cout<<"The roll of the student is: "<<roll<<endl;
    cout<<"The registration number of the student is: "<<regNo<<endl;
}
void student :: putdata(){
    cout<<"Enter the name:";
    cin.getline(name, 30);
    cout<<"Enter the roll number:";
    cin>>roll;
    cout<<"Enter your registration number:";
    cin>>regNo;
}


int main(){
    
    student s1;
    s1.putdata();
    s1.getdata();
    
    person p1;
    p1.putdata();
    p1.getdata();
    
    return 0;
}
