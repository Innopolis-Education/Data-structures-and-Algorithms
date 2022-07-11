#include <iostream>
#include "ArrayList.h"

using namespace std;

void example() {
    ArrayList<int> list(10);

    cout << list.isEmpty() << "\n";

    list.add(0, 1);
    cout << list.size() << "\n";

    cout << list.isEmpty() << "\n";

    cout << list.get(0) << "\n";

    cout << list.remove(0) << endl;
}
