int nombre_digits(int n) {
    if (n < 10) return 1;
    return 1 + nombre_digits(n/10);
}
