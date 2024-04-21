

// Complete the function solveMeFirst to compute the sum of two integers.

// Example


// Return .

// Function Description

// Complete the solveMeFirst function in the editor below.

// solveMeFirst has the following parameters:

// int a: the first value
// int b: the second value
// Returns
// - int: the sum of  and 

// Constraints


// Sample Input

// a = 2
// b = 3
// Sample Output

// 5
// Explanation

// .

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solveMeFirst(int a, int b){
    return a+b;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    cin>> a;
    cin>> b;
    cout<<  solveMeFirst(a, b)  ;
    return 0;
}
