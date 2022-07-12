#include "Stack_Array.h"
#include <iostream>

using namespace std;

void example() {
    StackArray<int> stack(5);

    cout << "Is empty: " << stack.isEmpty() << endl;

    for (int i = 1; i <= 5; i++)
        stack.push(i);

    cout << "Is empty: " << stack.isEmpty() << endl;

    cout << "Top: " << stack.top() << endl;

    cout << "Pop: ";
    for (int i = 0; i < 5; i++)
        cout << stack.pop() << " ";

    cout << "\n" << "Is empty: " << stack.isEmpty() << endl;
}
