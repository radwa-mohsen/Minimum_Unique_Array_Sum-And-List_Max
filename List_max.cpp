#include <iostream>
#include <list>

int main ()
{
  unsigned int i;
  std::list<int> mylist;

  std::cout << "Enter number of elements: ";
  std::cin >> i;
  
  if (i<mylist.max_size()) mylist.resize(i);
  else std::cout << "end it list doesnt fit.\n";

  return 0;
}