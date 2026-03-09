#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  const double ClassACost = 15.00;
  const double ClassBCost = 12.00;
  const double ClassCCost = 9.00;

  // TODO: Declare integer variables for tickets sold for each class
  int ticketsA;
  int ticketsB;
  int ticketsC;
  // TODO: Declare double variables for total sales per class and grand total
  double totalA;
  double totalB;
  double totalC;
  double total;
  // TODO: Prompt user and read number of Class A tickets sold
    cout << "Type a number for Class A\n";
    cin >> ticketsA;
  // TODO: Prompt user and read number of Class B tickets sold
  cout <<"Type a number for Class B\n";
  cin >> ticketsB;
  // TODO: Prompt user and read number of Class C tickets sold
  cout <<"Type a number for Class C\n";
  cin >> ticketsC;
  // TODO: Calculate sales for each class
  totalA = ticketsA *= ClassACost;
  totalB = ticketsB *= ClassBCost;
  totalC = ticketsC *= ClassCCost;
  // TODO: Calculate total sales
  total = totalA + + totalB + totalC;

  cout << setprecision(2) << fixed;
  cout << "Tickets sold for Class A " << ticketsA << " Sales Price for A   " << totalA << endl;
  cout << "Tickets sold for Class B " << ticketsB << " Sales Price for B   " << totalB << endl;
  cout << "Tickets sold for Class C " << ticketsC << " Sales Price for C   " << totalC << endl;
  cout << "Total Sales                              " << total << endl;
}
