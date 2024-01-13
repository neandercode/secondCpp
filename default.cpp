#include <iostream>
#include <string>
using namespace std;

void myMethod(string cleaning = "hwe") {
    cout << cleaning <<  "\n";
}

int main() 
{
    myMethod("portable");
    myMethod();
    myMethod("vlm");
    return 0;
}