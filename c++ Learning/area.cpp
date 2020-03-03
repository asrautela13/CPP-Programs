#include <iostream>
#include <climits>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Enter the length and breadth of the room: " << endl;
    int roomLength{1};
    int roomBreadth{1};
    cin >> roomLength >> roomBreadth;
    int area{1};
    area = roomLength * roomBreadth;
    cout << "Area of the room is : " << area << " sq feet" << endl;
    return 0;
}