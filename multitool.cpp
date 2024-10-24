#include <iostream>

using namespace std;
typedef unsigned short int USHORT;
const string version = "demo";

double sq(double integer);
double cb(double integer);
USHORT entry();
void square();
void test();
void myloop();
void cube();
void cls();
USHORT num;
USHORT toolnum;

int main()
{
    entry();
    myloop();
}

double sq(double integer)
{
    return integer * integer;
}

double cb(double integer)
{
    return integer * integer * integer;
}

USHORT entry()
{
    cout << "1. Numbers of Square";
    cout << "\n2. Numbers of Cube";
    if (version == "demo")
    {
        cout << "\n3. Test";
    }
    cout << "\n0. Quit\n!Don't enter letters!\n\nUr Choice->";
    cin >> toolnum;

    return 1;
}

void myloop() {
    do
    {
        switch (toolnum)
        {
        case 1: square();
            break;
            //
        case 2: cube();
            break;
            //
        case 3: 
            if (version == "demo") {
                test();
            }
            break;
            //
        default: 
            cout << "U need make a choice!\n";
            //break;
        }

    } while (toolnum != 0);
}

void square()
{
    cls();
    cout << "Enter a number take for square: " << endl;
    cin >> num;
    cout << "\nUr entered number's square-> " << sq(num) << "cm^2\n\n";
    entry();
    cin >> toolnum;
    myloop();
}

void cube()
{
    cls();
    cout << "Enter a number for take cube: " << endl;
    cin >> num;
    cout << "\nUr entered number's cube-> " << cb(num) << "cm^3\n\n" << endl;
    entry();
    cin >> toolnum;
    myloop();
}

void cls()
{
    system("cls");
}

void test()
{
    system("");
}
