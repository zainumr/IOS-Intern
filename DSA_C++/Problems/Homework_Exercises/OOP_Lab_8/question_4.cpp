#include <iostream>
using namespace std;

class Stack
{
private:
    int arr[5];
    int top;
public:
    void push(int val)
    {
        if (isFull()) { return; }
            top++;
            arr[top] = val;
            cout<< "Pushing " << val << '\n';
    }

    void pop()
    {
        if (isEmpty()) { return; }
            cout<< "Popping element: " << arr[top] << '\n';
            top--;
    }

    int peek()
    {
        if (isEmpty()) { return -1; }
            return arr[top];
    }

    int showEl()
    {
        if (!isEmpty()) { return -1; }
            top++;
            return arr[top];
    }

   

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == 4; }

    Stack() { top = -1; }
   
};


/*
    ================= Problem 4: =================
    Implement a Stack ADT using a class in C++. The stack should support basic operations like push, pop, and peek.
    1. Class: Stack
        -> Private Data Members:
            . int arr[5]
            . int top
        -> Public Member Functions:
            . void push(int value);
            . void pop();
            . int peek();
            . bool isEmpty();
            . bool isFull();
        -> Constructors:
            . Default Constructor — initialize top = -1.
    2. Input: Hardcode push/pop operations (no user input needed).
    3. Output: Show stack operations as they occur.
*/

int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    
    s.pop();
    s.pop();
    s.pop();

    cout << "Top element now: " << s.showEl() << endl;


    return 0;
}