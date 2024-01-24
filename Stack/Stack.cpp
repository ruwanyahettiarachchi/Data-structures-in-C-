#include <iostream>

const int MAX_SIZE = 5; 

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() 
    {
        top = -1;
    } // Initialize top to -1 to indicate an empty stack

    bool isEmpty() 
    {
        return (top == -1);
    }

    bool isFull() 
    {
        return (top == MAX_SIZE - 1);
    }

    void push(int element) 
    {
        if (!isFull()) 
        {
            top++;
            arr[top] = element;
            std::cout << "Pushed element: " << element << " onto the stack.\n";
        }
        else 
        {
            std::cout << "Stack is full. Cannot push element " << element << ".\n";
        }
    }

    void pop() 
    {
        if (!isEmpty()) 
        {
            int poppedElement = arr[top];
            top--;
            std::cout << "Popped element: " << poppedElement << " from the stack.\n";
        }
        else 
        {
            std::cout << "Stack is empty. Cannot pop from an empty stack.\n";
        }
    }

    int topElement() 
    {
        if (!isEmpty()) 
        {
            return arr[top];
        }
        else 
        {
            std::cout << "Stack is empty.\n";
            return -1;
        }
    }
};
int main() {
    Stack myStack;

    // Add elements until the stack becomes full
    for (int i = 1; i <= 5; ++i) 
    {
        myStack.push(i);
    }

    // Try to add more elements into the full stack
    myStack.push(6);

    // Remove all elements until the stack becomes empty
    while (!myStack.isEmpty()) 
    {
        myStack.pop();
    }

    // Try to remove more elements from the stack after it becomes empty
    myStack.pop();

    return 0;
}


