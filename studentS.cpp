#include<iostream>
using namespace std;

class student{
    private:
    int roll;
    float marks;

    public:
    void input(){
        cout<<"Enter Roll No. = ";
        cin>>roll;

        cout<<"Enter Marks = ";
        cin>>marks;
    }

    void display(){
        cout<<"Roll No.= "<<roll<<endl;
        cout<<"Marks = "<<marks<<endl;
    }
};

int main(){
    student s;

    s.input();
    s.display();

    return 0;
}