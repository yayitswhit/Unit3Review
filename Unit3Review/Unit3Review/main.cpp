//
//  main.cpp
//  Unit3Review
//
//  Created by Gilbert W. Sanborn Jr on 2/14/23.
//

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int main() {
    string movieName;
    double adultTicketPrice;
    double childTicketPrice;
    int numberAdultTicketsSold;
    int numberChildTicketsSold;
    double grossAmount;
    double percentageToBeDonated;
    
    cout << "Movie Name: ";
    cin >> movieName;
    cout << endl;
    
    cout << "Adult Ticket Price: ";
    cin >> adultTicketPrice;
    cout << endl;
    
    cout << "Child Ticket Price: ";
    cin >> childTicketPrice;
    cout << endl;
    
    cout << "Number of Adult Tickets Sold: ";
    cin >> numberAdultTicketsSold;
    cout << endl;
    
    cout << "Number of Child Tickets Sold: ";
    cin >> numberChildTicketsSold;
    cout << endl;
    
    cout << "Percentage to be donated: ";
    cin >> percentageToBeDonated;
    cout << endl;
    
    grossAmount = (adultTicketPrice * numberAdultTicketsSold) + (childTicketPrice * numberChildTicketsSold);
    
    int numTicketsSold;
    numTicketsSold = numberChildTicketsSold + numberAdultTicketsSold;
    double amtDonated = (grossAmount * percentageToBeDonated / 100);
    cout << setprecision(2) << fixed << showpoint;

    cout << setfill('.') << left << setw(35) <<  "Movie Name: " << right << movieName << endl;
    cout << left << setw(35) << "Number of Tickets Sold: " << right << numTicketsSold << endl;
    
    cout << setw(35) << left << "Gross Amount: " << right <<  grossAmount << endl;
    cout << setw(35) << left << "Percentage of gross amount donated: " << right << percentageToBeDonated << "%" << endl;
    
    cout << setw(35) << left << "Amount Donated: " << right << amtDonated << endl;
    
    double dummyVar;
    double netSale = grossAmount - amtDonated;
    cout << setw(35) << left << "Net Sale: " << right << netSale << endl;
    return 0;
}
