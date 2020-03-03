#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

int main()
{
    vector<int> numbers{};
    char selection{};

    do
    {
        cout << "\n*******__WELCOME TO OUR APPLICATION__*******\n";
        cout << "\n P-Print numbers.";
        cout << "\n A-Add number.";
        cout << "\n M-Mean of numbers.";
        cout << "\n S-Smallest number.";
        cout << "\n L-Largest number.";
        cout << "\n Q-Quit numbers.";

        cout << "\n\n Enter your response: \n";
        cin >> selection;

        if (selection == 'p' || selection == 'P')
        {
            if (numbers.size() == 0)
                cout << "\n[]-The list is empty.\n";
            else
            {
                cout << "[ ";
                for (auto number : numbers)
                    cout << number << " ";
                cout << "]";
            }
        }

        else if (selection == 'a' || selection == 'A')
        {
            int addNumber{};
            cout << "Enter the number you want to add: \n";
            cin >> addNumber;
            numbers.push_back(addNumber);
            cout << addNumber << " is added in the list successfully.\n";
        }

        else if (selection == 'M' || selection == 'm')
        {
            if (numbers.size() == 0)
            {
                cout << "\nList is empty. ";
            }
            else
            {

                int total{};
                for (auto number : numbers)
                    total += number;
                cout << "Mean is: " << static_cast<double>(total) / numbers.size() << "\n";
            }
        }

        else if (selection == 's' || selection == 'S')
        {

            if (numbers.size() == 0)
                cout << "List is empty\n";

            else
            {
                int smallest{};
                smallest = numbers.at(0);
                for (auto number : numbers)
                    if (smallest > number)
                        smallest = number;
                cout << smallest << " is Smallest\n";
            }
        }

        else if (selection == 'l' || selection == 'L')
        {

            if (numbers.size() == 0)
                cout << "List is empty\n";

            else
            {
                int largest{};
                largest = numbers.at(0);
                for (auto number : numbers)
                    if (largest < number)
                        largest = number;
                cout << largest << " is largest\n";
            }
        }

        else if (selection == 'q' || selection == 'Q')
            cout << "Good Bye\n";

        else
            cout << "\nINVALID CHOICE!\n";

    } while (selection != 'q' && selection != 'Q');

    return 0;
}