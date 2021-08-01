bool es_any_de_traspas(int n) {
    return ((n%4 == 0 and n%100 != 0) or (n%400 == 0));
}
