int max2(int x, int y) {
    if (y >= x) return y;
    return x;
}

int max4(int a, int b, int c, int d) {
    return max2(max2(a, b), max2(c, d));
}
