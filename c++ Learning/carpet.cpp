#include <iostream>
using std::cin;
using std::cout;

int main()
{
     const int validDays{30};
     const int perSmallRoom{25};
     const int perLargeRoom{35};
     const double serviceTax{0.06};
     double dues{};

     cout << "\nHELLO! WELCOME TO FRANKS CARPET CLEANING SERVICE: \n\n";
     cout << "How many small rooms you want to be cleaned?\n";
     int smallRooms{};
     cin >> smallRooms;
     cout << "How many large rooms you want to be cleaned?\n";
     int largeRooms{};
     cin >> largeRooms;
     cout << "Any dues Of previous months Y/N?\n";
     char response{};
     cin >> response;
     if (response == 'Y' || response == 'y')
     {
          cout << "Enter the due amount\n";
          cin >> dues;
     }
     else
          cout << "Great!, Always pay your dues on time.\n";

     cout << "\nESTIMATE FOR CARPET CLEANING SERVICE: \n";
     cout << "Number of small rooms: " << smallRooms << "\n";
     cout << "Number of large rooms: " << largeRooms << "\n";
     cout << "Price per small room: $" << perSmallRoom << "\n";
     cout << "Price per large room: $" << perLargeRoom << "\n";
     double cost{};
     cost = (smallRooms * perSmallRoom + largeRooms * perLargeRoom + dues);
     unsigned int taxableAmount{};
     taxableAmount = (smallRooms * perSmallRoom + largeRooms * perLargeRoom);
     double tax{};
     tax = (taxableAmount * serviceTax);
     cout << "Cost: $" << cost << "\n";
     cout << "Tax: $" << tax << "\n";
     double total{};
     total = (cost + tax);
     cout << "\n********************************************************\n";
     cout << "\nTOTAL ESTIMATION FOR CLEANING SERVICE: $" << total << "\n";
     cout << "Valid For " << validDays << " Days Only\n";
     return 0;
}
