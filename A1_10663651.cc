#include <iostream>
#include <cmath>

using namespace std;

int number_entered, a;
bool prime = true;

int main()
{
        cout <<"Please enter any positive number"<< endl;
        cin >> number_entered;


        for (a=2; a<=number_entered/2; ++a )
        {
          if(number_entered % a==0)
           {
              prime = false;
               break;
           }
       }

       if (prime)
       {
            cout <<"the number you have entered is a prime number"<< endl;
       }

       else
       {
            cout <<"the number you have entered is not a prime number"<< endl;
       }

       return 0;

}
