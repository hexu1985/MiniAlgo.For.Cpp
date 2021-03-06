// range heap example
#include <iostream>     // std::cout
#include <algorithm>    // std::make_heap, std::pop_heap, std::push_heap, std::sort_heap
#include <vector>       // std::vector

#include "heap_functions.hpp"

using namespace mini_algo;

int main () {
  int myints[] = {10,20,30,5,15};
  std::vector<int> v(myints,myints+5);

  make_heap (v);
  std::cout << "initial max heap   : " << v.front() << '\n';

  pop_heap (v,v.size()); v.pop_back();
  std::cout << "max heap after pop : " << v.front() << '\n';

  v.push_back(99); push_heap (v,v.size());
  std::cout << "max heap after push: " << v.front() << '\n';

  sort_heap (v);

  std::cout << "final sorted range :";
  for (unsigned i=0; i<v.size(); i++)
    std::cout << ' ' << v[i];

  std::cout << '\n';

  return 0;
}

	
/*
Output:

initial max heap   : 30
max heap after pop : 20
max heap after push: 99
final sorted range : 5 10 15 20 99
*/
