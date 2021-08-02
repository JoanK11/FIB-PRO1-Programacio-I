bool es_creixent(int x) {
    if (x < 10) return true;
    return (x%10 >= (x/10)%10 and es_creixent(x/10));
}
