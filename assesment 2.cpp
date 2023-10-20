#include <iostream>
#include <string>

using namespace std;

int main() {
    string eventName, customerName;
    int numGuests, eventDuration;
    double costPerGuestPerMinute = 0.05; // Adjust the rate as needed

    // Input for event details
    cout << "Enter the name of the event: ";
    getline(cin, eventName);

    cout << "Enter the customer's first and last name: ";
    getline(cin, customerName);

    cout << "Enter the number of guests: ";
    cin >> numGuests;

    cout << "Enter the number of minutes in the event: ";
    cin >> eventDuration;

    // Calculate the total cost
    double totalCost = numGuests * eventDuration * costPerGuestPerMinute;

    // Output the event details and cost
    cout << "\nEvent Details:\n";
    cout << "Event Name: " << eventName << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Number of Guests: " << numGuests << endl;
    cout << "Event Duration (minutes): " << eventDuration << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
