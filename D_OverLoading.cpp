// Diffrent Data Function overloading

#include <iostream>
using namespace std;

int multiply(int a, int b);
int multiply(int a, int b, int c);
int multiply(float a, double b, int c, float d);

int main()
{
    cout << multiply(10, 2) << endl;
    cout << multiply(5, 10, 8)<< endl;
    cout << multiply(5.9, 6.6666, 4, 8.43);

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}
int multiply(int a, int b, int c)
{
    return a * b * c;
}
int multiply(float a, double  b, int c, float d)
{
    return a * b * c * d;
}




/*#include <iostream>
using namespace std;

class Multiply
{
public:
    int multiply(int a, int b);
    int multiply(int a, int b, int c);
    int multiply(float a, double b, int c, float d);
};

int Multiply::multiply(int a, int b)
{
    return a * b;
}

int Multiply::multiply(int a, int b, int c)
{
    return a * b * c;
}

int Multiply::multiply(float a, double b, int c, float d)
{
    return a * b * c * d;
}

int main()
{
    Multiply obj;

    cout << obj.multiply(10, 2) << endl;
    cout << obj.multiply(5, 10, 8) << endl;
    cout << obj.multiply(5.9f, 6.6666, 4, 8.43f) << endl;

    return 0;
}*/
