#include <iostream>
using namespace std;

int main()
{
/*
  Level 1: Beginner (Variables, Data Types, Operators)

  Task 1: Simple Calculator ✅

  Pesudocode:
  1. input num1, num2
  2. sum = num1+num2,
     subtract = num1-num2,
     product = num1*num2,
     division = num1/num2,
     remainder = num1%num2
  3. print sum, subtract, product, division, remainder
  4. Exit

  // Code: 

  int num1, num2;
  cout<< "Enter num1: ";
  cin>>num1;
  cout<< "Enter num2: ";
  cin>>num2;
  
  // Sum
  int sum = num1+num2;
  cout<< "Sum = " << sum << endl;
  
  // Subtract
  int sub = num1-num2;
  cout<< "Subtract = " << sub << endl;
  
  // Product
  int product = num1*num2;
  cout<< "Product = " << product << endl;
  
  // Division
  int division = num1/num2;
  cout<< "Division = " << division << endl;
  
  // Remainder (Modulo)
  int remainder = num1%num2;
  cout<< "Remainder = " << remainder << endl;
  
*/
// ================================================
/*
  Task 2: Temperature Converter 

  Pesudocode:
  1. int temp, celcius, fahrenheit
  2. celcius = (temp x 9) / 5 + 32
  3. fahrenheit = (celcius - 32) x 5 / 9
  4. print celcius, fahrenheit
  5. Exit

  // Code:

  int temp = 25;
  int celcius, fahrenheit;

  // Celcius -> Fahrenheit
  fahrenheit = (temp * 9)/5 + 32;

  // Fahrenheit -> Celcius
  celcius = (fahrenheit - 32) * 5/9;

  cout<< "Fahrenheit = " << fahrenheit << endl;
  cout<< "Celcius = " << celcius << endl;

*/
// ================================================
/*
  Task 3: Area of Shapes (Circle, Rectangle, Triangle)

  Pesudocode:
  1. creat variables:
  areaCircle, areaRectangle, areaTriangle,
  pi = 3.14159, radius, length, width, base, height
  3. Formula:
  areaCircle = pi x radius^2
  areaRectangle = length x width
  areaTriangle = 0.5 x base x height
  4. print areaCircle, areaRectangle, areaTriangle
  5. Exit

// Code:

  double areaCircle, pi = 3.14159;
  int areaRectangle, areaTriangle, radius = 5, length = 8, width = 3, base = 10, height = 6;

  // Area of Circle
  areaCircle = pi*(radius*2);

  // Area of Rectangle
  areaRectangle = length*width;

  // Area of Triangle
  areaTriangle = 0.5*base*height;

  cout<< "Area of Circle is " << areaCircle << endl;
  cout<< "Area of Rectangle is " << areaRectangle << endl;
  cout<< "Area of Triangle is " << areaTriangle << endl;

*/
// ================================================
/*
  Level 2: Conditional Statements

  Task 1: Grade Calculator

  Pesudocode:
  1. input marks;
  2. if(marks >= 90 && marks <= 100)
      print A
    else if(marks >= 70 && marks < 90)
      print B
    else if(marks >= 50 && marks < 70)
      print C
    else if(marks >= 40 && marks < 50)
      print D
    else if(marks < 40)
      print F
    else
      print Invalid Marks

  3. Exit
  
  // Code: 

  int marks;
  cout<< "Enter your marks: ";
  cin>> marks;

  if (marks >= 90 && marks <= 100)
  {
    cout<< "A";
  } 
  else if (marks >= 80 && marks < 90)
  {
    cout<< "B";
  }
  else if (marks >= 60 && marks < 80)
  {
    cout<< "C";
  }
  else if (marks >= 40 && marks < 60)
  {
    cout<< "D";
  }
  else if (marks < 40)
  {
    cout<< "F";
  }
  else
  {
    cout<< "Invalid Marks";
  }

*/
// ================================================
/*
  Task 2: Number Classification (positive/negative, even/odd & prime/non-prime)

  Pesudocode:
  1. intput n
  2. // positive/negative
      if (n >= 0)
        print positive
      else
        print negative

    // even/odd
    if (n % 2 == 0)
      print even
    else
      print odd

  3. Exit

  // Code:
  int n;
  cout<< "Enter a number: ";
  cin>> n;

  // positive/negative
  if (n >= 0)
  {
    cout<< "Positive";
  }
  else
  {
    cout<< "Negative";
  }

  // even/odd
  if (n % 2 == 0)
  {
    cout<< "Even";
  }
  else
  {
    cout<< "Odd";
  }

*/
// ================================================
/*
  Task 3: Simple Login System

  Pesudocode:
  1. input userName, userPassword
  2. if(userName == "zainumr" && userPassword == "zain123")
        print Welcome!
     else
        print Invaild Credentials
  3. Exit

  // Code: 
  string userName, userPassword;

  cout<< "Enter username: ";
  cin>>userName;
  cout<< "Enter password: ";
  cin>>userPassword;

  if (userName == "zainumr" && userPassword == "zain123")
  {
    cout<< "Welcome!\n";
  }
  else
  {
    cout<< "Invalid Credentials\n";
  }

*/
// ================================================
/*
  Level 3: Loops & Nested Loops

  Task 1: Multiplication Table (Print table of any number using a loop)

  Pesudocode:
  1. input n
  2. for(i=1, i<=10, i++)
        print n x i = n*i
  3. Exit

  // Code: 
  int n;
  cout<< "Enter number: ";
  cin>> n;

  int m;
  cout<< "Enter number of multiple: ";
  cin>> m;

  for (int i = 1; i <= m; i++)
  {
    cout<< n << " x " << i << " = " << n*i << endl;
  }

*/
// ================================================
/*
  Task 2: Pattern Printing
  Pattern A (Triangle)
  *
  **
  ***
  ****

  Pattern B (Number Pyramid)
  1
  12
  123
  1234

  Pesudocode:
  1. outer loop to print no. of lines required
  2. inner loop to print no. of stars/digits on each line
  3. so in pattern A & B no. of iteration will be the no. of stars/digits to print
  4. In pattern C we will divide pattern into top and bottom structure.
  5. Will explain on notepad
  6. Exit
  

  // Code:
  int n;
  cout<< "Enter n: ";
  cin>> n;

  // Pattern A (Triangle)
  // outer loop -> no. of lines
  for (int i = 0; i < n; i++)
  {
    // inner loop -> stars on each line
    for (int j = 0; j <= i; j++)
    {
      cout<< "*";
    }
    cout<<endl;
  }

  // Pattern B (Number Pyramid)
  // outer loop -> no. of lines
  for (int i = 0; i < n; i++)
  {
    // inner loop -> digits on each line
    for (int j = 1; j <= i+1; j++)
    {
      cout<< j;
    }
    cout<<endl;
  }

  cout<< "\n";

  // Pattern C (Diamond pattern – difficult)
  // top structure
  //outer loop -> no. of lines
  for (int i = 0; i < n; i++)
  {
    // inner loop -> no. of spaces
    for (int j = 0; j < n-i-1; j++)
    {
      cout<< " ";
    }

    // inner loop -> no. of stars on left
    for (int j = 0; j <=i; j++)
    {
      cout<< "*";
    }

    // inner loop -> no. of stars on right
    for (int j = 2; j <=i+1; j++)
    {
      cout<< "*";
    }
    
    cout<< "\n";
  }
  
  // bottom structure
  //outer loop -> no. of lines
  for (int i = 0; i < n; i++)
  {
    // inner loop -> no. of spaces
    for (int j = 0; j <= i; j++)
    {
      cout<< " ";
    }

    // inner loop -> no. of stars on left
    for (int j = 0; j < n-i-1; j++)
    {
      cout<< "*";
    }

    // inner loop -> no. of stars on right
    for (int j = 0; j < n-i-2; j++)
    {
      cout<< "*";
    }
    
    cout<< "\n";
  }

*/
// ================================================
/*
  Task 2: Sum of Digits (Input a number → find sum of all digits using loop)


  Pesudocode:
  1. input n
  2. sum = 0
  3. for(i=0, i<= n, i++)
        sum+= i
  4. print sum
  5. Exit
  
  */

  // Code:
  int n;
  cout<< "Enter number: ";
  cin>> n;

  int sum = 0;

  for (int i = 0; i <= n; i++)
  {
    sum += i;
  }
  
  cout<< "Sum of digit " << n << " is " << sum << endl;

}

