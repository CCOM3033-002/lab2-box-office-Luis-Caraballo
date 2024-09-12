//Luis Caraballo Aponte
//This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movvie laying in the theater


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    //Display the purpose of this program
    cout << "This program calculates a theater's gross and net box office profit." << endl;

    //Get movie name, adult tickets sold, and child tickets sold
    string movieName;
    int adultTickets, childTickets;
    
    cout << "Enter the movie name: ";
    getline(cin, movieName);

    cout << "Enter the number of adult tickets sold: ";
    cin >> adultTickets;

    cout << "Enter the number of child tickets sold: ";
    cin >> childTickets;

    //Calculate ticket sales
    double adultTicketPrice = 10.00;
    double childTicketPrice = 6.00;

    double adultTicketSales = adultTickets * adultTicketPrice;
    double childTicketSales = childTickets * childTicketPrice;

    //Calculate gross box office profit
    double grossBoxOfficeProfit = adultTicketSales + childTicketPrice;

    //Calculate net box office profit (20% of gross)
    double netBoxOfficeProfit = 0.20 * grossBoxOfficeProfit;

    //Calculate amount paid to distributor
    double amountPaidToDistributor= grossBoxOfficeProfit - netBoxOfficeProfit;

    //Display report
    cout << "\nMovie Name: " << setw(36) << movieName << endl;
    cout << "Adult Tickets Sold: " << setw(20) << adultTickets << endl;
    cout << "Child Tickets Sold: " << setw(20) << childTickets << endl;
    cout << "Gross Box Office Profit: " <<setw(12) << fixed << setprecision (2) << "$" << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit: " <<setw(14) << fixed << setprecision(2) << "$" << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: " <<setw(9) << fixed << setprecision(2) << "$" << amountPaidToDistributor << endl;

    return 0;
}


    
    











