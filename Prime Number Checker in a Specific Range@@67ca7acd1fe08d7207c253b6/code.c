int printPrimesInRange(int a, int b){
    int store = 0;
    for(int x= a; x <= b; x++){
        if (x < 2) return 0;
        for (int i = 2; i*i <= x; i++){
        if (x % i == 0){
            x += store;
            return store;
        }
    }

    }
}
