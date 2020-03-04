#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::string;

int main()
{

    const string alphabets{" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string cypher{"!ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};

    cout << "Enter your secret message : \n";
    string secretMessage{};
    getline(cin, secretMessage);

    string encrypted{};

    cout << "\nEncrypting......\n";

    for (auto character : secretMessage)
    {
        size_t position = alphabets.find(character);
        if (position != string::npos)
        {
            char substitute = cypher.at(position);
            encrypted += substitute;
        }

        else
        {
            encrypted += character;
        }
    }

    cout << "Encrypted message is : " << encrypted << "\n\n";
    cout << "Decrypting......\n";

    string decrypted{};
    for (auto character : encrypted)
    {
        size_t position = cypher.find(character);
        if (position != string::npos)
        {
            char substitute = alphabets.at(position);
            decrypted += substitute;
        }
        else
        {
            decrypted += character;
        }
    }

    cout << "Decrypted message is: " << decrypted << "\n";

    return 0;
}
