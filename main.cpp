#include <iostream>

using namespace std;

void modifica(int *p)
{
    *p = 4;
}

void modifica2(int &r)
{
    r = 5;
}

int main()
{

    int x = 0;
    modifica(&x);  //modifica2(x);
    cout << x << endl;


/*
    int x;
    int &r = x; // Referencia
    r = 5;
    cout << x << endl;
*/

    return 0;
}
