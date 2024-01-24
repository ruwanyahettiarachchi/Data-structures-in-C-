
#include <iostream>
#include<list>

using namespace std;

int main()
{
    //creating the list
    list<int> numbers = { 1,2,3,4 };

    //display the initial original list
    cout << "Initial list :";
    for (int number : numbers)
    {
        cout << number << ", ";
    }

    //add new element to the front
    numbers.push_front(0);

    //add new element to the back
    numbers.push_back(5);

    //display the modified list
    cout << endl << "Final list :";
    for (int number : numbers)
    {
        cout << number << ", ";
    }

    //displaying the first element of the list
    cout << endl << "First element" << numbers.front() << endl;

    //displaying the last element of the list
    cout << "First element" << numbers.back() << endl;

    // remove the first element of the list
    numbers.pop_front();

    // remove the last element of the list
    numbers.pop_back();

    // display the modified list 
    cout << "Final List after removing elements: ";
    for (int number : numbers)
    {
        cout << number << ", ";
    }

    return 0;
}


