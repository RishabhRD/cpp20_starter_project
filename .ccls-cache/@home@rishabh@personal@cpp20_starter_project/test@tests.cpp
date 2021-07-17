#include <boost/ut.hpp>

using namespace boost::ut;

unsigned int Factorial(unsigned int number)
{
  return number <= 1 ? number : Factorial(number - 1) * number;
}

suite errors = []{
  expect(Factorial(1) == 1_i);
  expect(Factorial(0) == 1_i);
};
