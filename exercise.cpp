#include <iostream>
 
using namespace std;
 
int main()
{
    int number = 0;
 
    while (cin >> number)
    {
        if (number == 7)
        {
            break;
        }
        else
        {
            number > 7 ? cout << "menshe semi" << endl : cout << "bolshe semi" << endl;
            number > 10 ? cout << "menshe desyati" << endl  : cout << "bolshe desyati" << endl;
            (number % 2 == 0) ? cout << "delitsya na dva" << endl : cout << "ne delitsya na dva" << endl;
            (number % 3 == 0) ? cout << "delitsya na tri" << endl  : cout << "ne delitsya na tri" << endl;
        }
    }
    return 0;
}
