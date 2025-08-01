long long int factorielle(long long int n) {
    int i = 0;
    long long int k = n;
    long long int facto = 1;
    while (i < n){
        k--;
        i++;
        facto += facto * k;
        printf("%lld * %lld\n",k, facto);
    };
    return facto;
}
