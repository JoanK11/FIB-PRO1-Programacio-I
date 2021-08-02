int suma_digits(int x) {
    if (x < 10) return x;
    return x%10 + suma_digits(x/10);
}

int reduccio_digits(int x) {
    int result = suma_digits(x);
    if (result < 10) return result;
    return reduccio_digits(result);
}
