#include <iostream>
using namespace std;

class Students
{
private:
    string Name;
    string Branch;
    int RollNo;

public:
    void setData(string n, string b, int r)
    {
        Name = n;
        Branch = b;
        RollNo = r;
    }

    void getData()
    {
        cout << "Name: " << Name << endl;
        cout << "Branch: " << Branch << endl;
        cout << "Roll No: " << RollNo << endl;
    }
};

int main()
{
    Students s1;
    string n;
    string b;
    int r;

    cin>>n>>b>>r;

    s1.setData(n,b,r);
    s1.getData();

    return 0;
}