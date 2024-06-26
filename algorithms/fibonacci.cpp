#include <vector>

// https://leetcode.com/problems/fibonacci-number
//The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, 
// starting from 0 and 1. That is,
// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
int fib(int n) 
{
    std::vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (size_t i = 2; i <= n; i++)
      dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}