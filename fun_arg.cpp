#include <iostream>

using namespace std;

void processFunction(int (*func)(int)) 
{
    int result = func(5);  // Call the function passed as an argument
    cout << "Result: " << result <<endl;
}

// Function that will be passed as an argument
int square(int num) 
{
    return num * num;
}

int main() 
{
    // Pass the square function as an argument to processFunction
    processFunction(square);
    return 0;
}

