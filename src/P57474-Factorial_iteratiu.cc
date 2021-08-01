int factorial(int n) {
    int resultat = 1;
    while (n > 1) {
        resultat *= n;
        --n;
    }
    return resultat;
}
