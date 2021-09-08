
#include "CxxTemplate.h"
#include "ANewClass.h"
#include "SumFunc.h"

#include <string>
#include <iostream>
//#include <chrono>
using namespace std;
//using namespace std::chrono_literals;

namespace cxxt
{

  CxxApplication::CxxApplication(int argc, char *argv[])
  {

    // Test For String
    cout << "Hello CMake." << std::endl;
    string h = "Hello";
    string w = "Workd";
    string hw = h + " " + w;

    size_t i = hw.length();
    size_t j = hw.size();
    cout << hw << i << "char " << j << "char \n";

    // Test for String Compare
    string s = "Hello";
    bool b = (s == "Hello");
    if (b)
      cout << "s is True";
    else
      cout << "S is False";
    std::cout << "\n\n\n***********************************\n";
    int *d = new int;
    int c = 9;
    d = &c;
    // delete d;
    cout << *d;

    std::cout << "\n\n\n***********************************\n";
    // Test For Function
    ANewClass anew;
    anew.run();
    std::cout << sum(3, 4) << std::endl;
  }

  CxxApplication::~CxxApplication()
  {
    // TODO cleanup
  }

} // namespace cxxt

int main(int argc, char *argv[])
{
  cxxt::CxxApplication app(argc, argv);
  return 0;
}