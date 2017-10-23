#include <iostream>
#include <cmath>

using namespace std;

unsigned int lastDigitResult(unsigned long int base,unsigned long int index)
{
    unsigned int lastDigitBase = base % 10;
    unsigned int moduloIndex = index % 4;
    unsigned int lastDigitResult;

    switch(lastDigitBase)
{
    case 0:
      lastDigitResult = 0;
      break;
    case 1:
        lastDigitResult = 1;
        break;
    case 4:
        if(index % 2 == 0)
        {
          lastDigitResult = 6;
          break;
        }
        else
        {
          lastDigitResult = 4;
          break;
        }

    case 5:
        lastDigitResult = 5;
        break;
    case 6:
        lastDigitResult = 6;
        break;
    case 9:
        if(index % 2 == 0)
        {
            lastDigitResult = 1;
            break;
        }
        else
        {
            lastDigitResult = 9;
            break;
        }

    default:
        int temp = pow(lastDigitBase,moduloIndex);
        if(temp == 0)
        {
         lastDigitResult = 4;
          break;
        }
        else
        {
         lastDigitResult = temp%10;
          break;
        }
    }

    return lastDigitResult;

}
int main()
{
    unsigned int tries;
    unsigned long int base;
    unsigned long int index;

    cin >> tries;


    for(int i = 0;i<tries;i++)
    {
        cin >> base;
        cin >> index;
        cout << lastDigitResult(base,index)<< endl;
    }

    return 0;
}
