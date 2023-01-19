fibonacci c++


#include<iostream>
#include<vector>

using namespace std;

//recursive
int fibonacci(int n) 
{ 
    if (n <= 1) 
        return n; 
    return fibonacci(n-1) + fibonacci(n-2); 
} 

// iterative
void fibonacciIterative(int n) 
{ 
    int a = 0, b = 1, c; 
    if (n == 0) 
        return; 
    for (int i = 2; i <= n; i++) 
    { 
        c = a + b; 
        a = b; 
        b = c; 
    } 
    cout << b << endl; 
} 

//using vector
void fibonacciVector(int n) 
{ 
    vector<int> f(n+1); 
    f[0] = 0; 
    f[1] = 1; 
  
    for (int i = 2; i <= n; i++) 
        f[i] = f[i-1] + f[i-2]; 
  
    cout << f[n] << endl; 
} 

int main () 
{ 
    int n = 9; 
    cout << "Fibonacci number is " << fibonacci(n) << endl; 
    fibonacciIterative(n); 
    fibonacciVector(n); 
    return 0; 
}
