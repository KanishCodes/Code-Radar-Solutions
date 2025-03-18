void printPrimesInRange(int a, int b) {
    for (int x = a; x <= b; x++) {
        if (x < 2) continue;  // Skip numbers < 2 (not prime)

        int isPrime = 1;  // Assume x is prime
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                isPrime = 0;  // Not a prime number
                
                printf("No prime numbers");
                break;
            }
        }

        if (isPrime) {
            printf("%d ", x);  // Print the prime number
        }
    }
    printf("\n");  // New line after printing all primes
}