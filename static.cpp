// #include<iostream>
// using namespace std;

// class student{
//     private:
//     static int count;

//     public:
//     student(){
//         count++;
//     }

//     static void displaycount(){
//         cout<<"Number of object = "<<count<<endl;
//     }

// };

// int student :: count = 0;
// int main(){
//     student s1;
//     student s2;
//     student s3;

//     student :: displaycount();
//     return 0;
// }

#include<iostream>
using namespace std;

class student{
    private:
    static int count;

    public:
    student(){
        count++;
    }

    static void displaycount(){
        cout<<"Number of Object = "<<count<<endl;
        }
};

int student::count=0;

int main(){
    student s1;
    student s2;
    student s3;

    student::displaycount();
    return 0;
}