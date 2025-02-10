// Will Brawner
// wrb0035
// main





#include <iostream>
using namespace std;

int main() {
    const double SWEETENER_IN_SODA = 0.001;
    double sweetenerAmount;
    cout << "What is the amount of artificial sweetener needed to kill a mouse: \n";
    
    cin >> sweetenerAmount;

    double weightOfMouse;
    cout << "What is the weight of the mouse: \n";

    cin >> weightOfMouse;

    double weightOfDieter;
    cout << "What is the weight of the dieter: \n";

    cin >> weightOfDieter;

    double fatalAmount;
    fatalAmount = (((sweetenerAmount / SWEETENER_IN_SODA) * weightOfMouse) * weightOfDieter);

    cout << "You can drink ";
    cout << fatalAmount;
    cout << " diet soda without dying as a result.";
}
