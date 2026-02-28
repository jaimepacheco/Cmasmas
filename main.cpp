#include <iostream>
#include<string>

using namespace std;

int area(int length, int width) {
    return length * width;
}

int main() {

    string text = "Hello, World!";
    cout << text << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Iteration: " << i << endl;
    }

    cout << "Area of rectangle with length 5 and width 3: " << area(5, 3) << endl;

    return 0;
    
}