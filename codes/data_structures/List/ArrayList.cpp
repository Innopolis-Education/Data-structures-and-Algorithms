// Copyright 2022 Zener

#include "ArrayList.h"
#include <iostream>

void example() {
  ArrayList<int> list(10);

  std::cout << list.isEmpty() << "\n";

  list.add(0, 1);
  std::cout << list.size() << "\n";

  std::cout << list.isEmpty() << "\n";

  std::cout << list.get(0) << "\n";

  std::cout << list.remove(0) << std::endl;
}
