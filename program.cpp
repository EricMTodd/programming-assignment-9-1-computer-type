#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() {
    struct computerType newComputer;

    cout << "Please input computer manufacturer: ";
    getline(cin, newComputer.manufacturer);
    // cout << endl;

    cout << "Please input computer model type: ";
    getline(cin, newComputer.modelType);
    // cin >> computerType.modelType;
    // cout << endl;

    cout << "Please input computer processor type: ";
    getline(cin, newComputer.processorType);
    // cout << endl;

    cout << "Please input RAM size: ";
    cin >> newComputer.ram;
    // cout << endl;

    cout << "Please input hard drive size: ";
    cin >> newComputer.hardDriveSize;
    // cout << endl;

    cout << "Please input the year built: ";
    cin >> newComputer.yearBuilt;
    // cout << endl;

    cout << "Please input the price of the computer: ";
    cin >> newComputer.price;
    // cout << endl;

    cout << "Manufacturer: " << newComputer.manufacturer << endl;
    cout << "Model: " << newComputer.modelType << endl;
    cout << "Processor: " << newComputer.processorType << endl;
    cout << "Ram: " << newComputer.ram << endl;
    cout << "Hard Drive Size: " << newComputer.hardDriveSize << endl;
    cout << "Year Built: " << newComputer.yearBuilt << endl;
    cout << "Price: $" << newComputer.price << showpoint << fixed << endl;

    return 0;
}