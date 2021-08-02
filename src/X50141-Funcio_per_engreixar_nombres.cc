int engreixa(int n) {
    if (n < 10) return n;
    int x = engreixa(n/10);
    int y = x%10, z = n%10;
    int aux = y;
    if (z > aux) aux = z;
    return x*10 + aux;
}
