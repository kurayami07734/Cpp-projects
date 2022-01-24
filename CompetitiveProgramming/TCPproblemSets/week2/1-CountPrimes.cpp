#include <iostream>
#include <vector>

// Program to count primes from 1 from n (included)

int countPrimes(int n)
{
    std::vector<bool> sieve(n + 1, true);
    sieve[0] = false;
    sieve[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (sieve[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;
        }
    }
    int count = 0;
    for (bool b : sieve)
    {
        if (b)
            count++;
    }
    return count;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << countPrimes(n) << "\n";
    return 0;
}