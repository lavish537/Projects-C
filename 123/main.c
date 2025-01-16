#include <stdio.h>

// Function to find the maximum strength of the last friend
long long maxStrength(long long a[], long long n) {
    int dp[100]; // Assuming a maximum of 100 friends (adjust as needed)
    dp[0] = a[0]; // Base case: first friend's strength

    for (long long i = 1; i < n; ++i) {
        dp[i] = a[i]; // Initialize with current friend's strength
        for (long long j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                dp[i] = (dp[i] > dp[j] + a[i] - a[j]) ? dp[i] : dp[j] + a[i] - a[j];
            }
        }
    }

    return dp[n - 1]; // Maximum strength of the last friend
}

int main() {
    long long n = 5; // Number of friends
    long long a[] = {3, 2, 4, 5, 4,12,212,32,3,232,32,3,23,23,231,23,123,123,2,31,23}; // Strength ratings

    long long result = maxStrength(a, n);
    printf("The highest possible rating of the last friend: %lld\n", result);

    return 0;
}
