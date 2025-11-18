#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout << "Enter a number : ";
    cin >> n;
/*
    char ch = 'A';
    for (int i=0; i<n; i++)
    {

        for (int j=0; j<n; j++)
        {
            cout << ch << " ";
            ch++;
        }
    
    cout << endl;
        
    }
    


    // Triangle Pattern for stars

    for (int i = 0; i < n; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout<< "* ";
        }
    
    cout<< endl;
    }


    // Triangle patrtern for numbers

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout<< i+1 << " ";
        }

    cout<< endl;
        
    }


    char ch = 'A';

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<i+1; j++)
        {
            cout<< ch << " ";
        }
        
        ch++;
        cout<< endl;
    }
    

    // Triangle pattern for numbers

    
    for (int i=0; i<n; i++)
    {
        int num = 1;
        for (int j=0; j<i+1; j++)
        {
            cout<< num << " ";
            num++;
        }
        
        cout<< endl;

    }
        

    // Reverse Triangle Pattern with numbers

    
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j>0; j--)
        {
            cout<< j << " ";
        }

        cout<< endl;
        
    }



    // Floyd's Triangle pattern

    int num = 1;

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j>0; j--)
        {
            cout<< num << " ";
            num++;
        }

        cout<< endl;
        
    }
    

    // Character version of Floyd's Triangle

    char ch = 'A';

    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j>0; j--)
        {
            cout<< ch << " ";
            ch++;
        }
        
        cout<< endl;
    }



    // Character version of reverse Floyd's Triangle

    for (int i=0; i<n; i++)
    {
        
        for (char ch= 'A' + i; ch >= 'A'; ch--)
        {
            
            cout<< ch << " ";
        }
        cout<< endl;
    }
    
    // Inverted triangle pattern

    // number of lines
    for (int i=0; i<n; i++)
    {
        // spaces required
        for (int j= 0; j<i; j++)
        {
            cout<< " ";
        }

        // number of elements in row
        for (int k=0; k<n-i; k++)
        {
            cout<< i+1;
        }
        
        cout<< endl;
    }
    
    // Character verion of inverted triangle pattern

    char ch = 'A';

    for (int i=0; i<n; i++)
    {
        // spaces
        for (int j = 0; j<i; j++)
        {
            cout<< " ";
        }

        // characters
        for (int k=0; k<n-i; k++)
        {
            cout<< ch;
        }
        ch++;
        
        cout<< endl;
        
    }

    // Pyramid Pattern

    // lines
    for (int i=0; i<n; i++)
    {
        // spaces
        for (int j=0; j<n-i-1; j++)
        {
            cout<< " ";
        }
        
        // first half
        for (int k=1; k<=i+1; k++)
        {
            cout<< k;
        }
        
        // second half
        for (int l=1; l<i+1; l++)
        {
            cout<< l;
        }
        

        cout<< endl;
        
    }
    

    // Hollow diamand pattern

    // top structure
    for (int i=0; i<n; i++)
    {
        // spaces
        for (int j=0; j<n-i-1; j++)
        {
            cout<< " ";
        }
        
        cout<< "*";

        if (i!=0)
        {
            // spaces
            for (int j=0; j<2*i-1; j++)
            {
                cout<< " ";
            }

            // stars
            cout<< "*";
        }

        cout<< endl;
    }

    // bottom structure
    for (int i=0; i<n-1; i++)
    {
        // spaces
        for (int j=0; j<i+1; j++)
        {
            cout<< " ";
        }
        
        cout<< "*";

        if (i!=n-2)
        {
            // spaces
            for (int j=0; j<2*(n-i)-5; j++)
            {
                cout<< " ";
            }

            // stars
            cout<< "*";
        }

        cout<< endl;
    }
    
    */

    // Butterfly Pattern
    
    // Top structure
    // number of lines
    for (int i=0; i<n; i++)
    {
        // first half
        // stars on each line
        for (int j=0; j<i+1; j++)
        {
            cout<< "*";
        }

        // spaces on each line
        for (int j= 0; j<2*(n-i-1); j++)
        {
            cout<< " ";
        }
        
        // second half
        for (int k=0; k<i+1; k++)
        {
            cout<< "*";
        }

        cout<< endl;
        
    }
    
    // Bottom structure
    // number of lines
    for (int i=0; i<n; i++)
    {
        // first half
        // stars on each line
        for (int j=0; j<n-i; j++)
        {
            cout<< "*";
        }

        // spaces on each line
        for (int j=n+2; j>2*(n-i-1); j--)
        {
            cout<< " ";
        }
        
        // second half
        for (int k=0; k<n-i; k++)
        {
            cout<< "*";
        }

        cout<< endl;
        
    }

    return 0;
}