bool es_perfecte(int n) {
    int counter = -n;
    for (int i = 1; i*i <= n; ++i) {
        if (n % i == 0) counter += i + n/i;
    }
    return (counter == n and n > 1);
}
