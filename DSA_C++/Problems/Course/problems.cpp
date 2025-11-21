#include <iostream>
using namespace std;

int main() {

/*
// Sum of numbers from 1 to n?

Pesudocode:
1. input n = 3
2. sum = 0
3. for(i=1; i<=n; i++)
{
      sum+=i
}
4. Exit

int n;
int sum = 0;
cout<< "Enter number: ";
cin>> n;

for (int i = 1; i <= n; i++)
{
      sum+=i;
}

int i = 1;

while (i<=n)
{
      sum+=i;
      i++;
}

cout<<"Sum = "<< sum;

===============================================

// Sum of all odd numbers from 1 to N?

Pesudocode:
1. input n = 5
2. sum = 0
3. for(i=1; i<=n; i++)
{
      if(i%2 != 0)
      {
            cout<<i<<" ";
      }
}
4. Exit

int n;
int sum = 0;
cout<< "Enter number: ";
cin>> n;

for (int i = 1; i <= n; i++)
{
      if (i%2 != 0)
      {
            cout<< i <<" ";
            sum+=i;
      }
}

cout<< endl;
cout<< "Sum = " << sum;

===============================================

// Check if a number is prime or not?

Pesudocode:
1. input n = 5
2. for(i=2; i<n; i++)
{
      if(n%i == 0)
      {
            cout<<"Number is prime";
      }
      else
      {
            cout<<"Not a prime number"
      }
}
3. Exit

int n;
cout<< "Enter number: ";
cin>> n;

bool isPrime = true;

for (int i=2; i*i<=n; i++)
{
      if (n%i == 0)
      {
            isPrime = false;
            break;
      }
}

if (isPrime == true)
{
      cout<< "Prime";
}
else 
{
      cout<< "Non Prime";
}

===============================================

// Sum of all numbers from 1 to N which are divisible by 3?

Pesudocode:
1. input n ✅
2. sum = 0 ✅
3. for (i=1, i<=n, i++)
{
      if(i%2 != 0)
      {
            sum += i
      }
}

4. print sum
5. Exit

int n;
int sum = 0;
cout<< "Enter number: ";
cin>> n;

for (int i=1; i<=n; i++)
{
      if (i%2 != 0)
      {
            sum += i;
      }
      
}

cout<< "Sum is " << sum;

===============================================

// Print factorial of a number N?

Pesudocode:
1. input n
2. for (i=1, i<=n, i++)
{
      if(n%i != 0)
      {
            print i
      }
}

3. Exit

int n;
cout<< "Enter number: ";
cin>> n;

for (int i=1; i<=n; i++)
{
      if (n%i == 0)
      {
            cout<< i << " ";
      }
      
}

*/

int n;
cout<< "Enter number: ";
cin>> n;

for (int i=2; i<=n; i++)
{
      for (int j=2; j<=i; j++)
      {
            if (i%j == 0)
            {
                  cout<< "i = " << i << " " << endl;
                  // cout << "j = " << j << endl;
                  break;
            }

      }
      
}


return 0;

}