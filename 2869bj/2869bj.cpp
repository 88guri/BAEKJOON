#include <iostream>
using namespace std;
int main()
{
    int a,b,v;
    int day = 0;

    cin >> a >> b >> v;

    day = ((v - b) % (a - b));
    if (day==0) {
        cout << ((v - b) / (a - b));
    }
    else {
        cout << (((v - b) / (a - b)) + 1);
    }
    
}