/*

*
* *
* * *
* * * *
* * * * *

*/

#include <iostream>
using namespace std;

void triangle(int r, int c)
{
    if (r == 0)
    {
        return;
    }
    if (c < r)
    {
        //cout << "*";
        triangle(r, c + 1);
        cout << "*";
    }
    else
    {
        //cout << endl;
        triangle(r - 1, 0);
        cout << endl;
    }
}

int main()
{
    int N;
    cin >> N;
    triangle(N, 0);

    return 0;
}
