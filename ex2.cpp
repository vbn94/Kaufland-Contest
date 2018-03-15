// Math Superstar

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    double r1, h1, r2, h2, v1, v2;
    string input;
    
    cin >> input;
    
    int firstcomma = input.find(",");
    int secondcomma = input.find(",", firstcomma + 1);
    int thirdcomma = input.find(",", secondcomma + 1);
    
    r1 = stod(input.substr(0, firstcomma)) / 10;
    h1 = stod(input.substr(firstcomma + 1, secondcomma - firstcomma - 1)) / 10;
    r2 = stod(input.substr(secondcomma + 1, thirdcomma - secondcomma - 1)) / 10;
    h2 = stod(input.substr(thirdcomma + 1, input.size() - thirdcomma - 1)) / 10;
    
    v1 = (double) ceil(M_PI * r1 * r1 * h1 * 100) / 100;
    v2 = (double) ceil(M_PI * r2 * r2 * h2 * 100) / 100;
    
    if(v1 > v2)
        cout << v1;
    else
        cout << v2;
    
    return 0;
}
