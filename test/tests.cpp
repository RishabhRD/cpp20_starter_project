#include <boost/ut.hpp>

using namespace boost::ut;

unsigned int Factorial(unsigned int number) {
  if(number == 0 or number == 1) return 1;
  return number * Factorial(number - 1);
}

suite errors = []{
  expect(Factorial(1) == 1_i);
  expect(Factorial(0) == 1_i);
};
