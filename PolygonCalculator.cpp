#include <iostream>
#include <cmath>
using namespace std;

int main() {
    string useAgain;
    double sideCount, sideLength, polygonArea, polygonCircumference;

    cout << "n - sided regular polygon area calculator\n";
    
    while (true)
    {
        cout << "Number of sides of your polygon(whole number): ";
        cin >> sideCount;
        sideCount = floor(sideCount);
        cout << "Side length of your polygon: ";
        cin >> sideLength;

        polygonArea = (pow(sideLength, 2.0)*(sideCount))/(4*tan(M_PI/sideCount));
        polygonCircumference = sideCount*sideLength;
        cout << "The area of your polygon is: " << polygonArea << "\n";
        cout << "The circumference of your polygon is: " << polygonCircumference << "\n";

        cout << "do you want to keep going?[Y/n]\n";
        cin >> useAgain;
        if (useAgain == "Y")
        {
            continue;
        }
        break;
    }
    

    return 0;
    
}
