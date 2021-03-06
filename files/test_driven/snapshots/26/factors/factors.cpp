#include "factors.h"

extern std::vector<int> prime_factors(int n)
{
  std::vector<int> primes;
  int candidate = 2;
  while (n > 1) {
    for (; n % candidate == 0; n /= candidate) {
      primes.push_back(candidate);
    }
    ++candidate;
  }
  return primes;
}
