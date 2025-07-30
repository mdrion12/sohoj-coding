// prime factorization without sieve.
map<ll, int> primeFactors(ll n)
{
    map<ll, int> factorCount;
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            factorCount[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        factorCount[n]++;
    }
    return factorCount;
}
