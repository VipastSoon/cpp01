
#include "CxxTemplate.h"
#include "ANewClass.h"
#include "MyMathFunc.h"

#include <string>
#include <iostream>
using namespace std;
//using namespace std::chrono_literals;

namespace cxxt
{

  CxxApplication::CxxApplication(int argc, char *argv[])
  {

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