#include <iostream>
using namespace std;
int main()
{
    for (int i = 1;i <= 10; i++)
    {
        i++;
        cout << i << endl;
    }
    int sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    cout << "sum is " << sum << endl;
    return 0;
}
