#include <iostream>

using namespace std;

string GetConvertedMessage(string message, string cipher, string codeAlphabet)
{
    string convertedMessage {};
    for (char c: message) {
        size_t position = codeAlphabet.find(c);
        if (position != string::npos) {
            char new_char {cipher.at(position)};
            convertedMessage += new_char;
        } else {
            convertedMessage += c;
        }
    }
    return convertedMessage;
}

int main()
{
    // Cipher from course
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string secretMessage {};
    string encryptedMessage {};
    char choice = ' ';
    
    do
    {
        cout << "Please make a selction:\n"
        "d: Decrypt a message\n"
        "e: Encrypt a message\n"
        "q: Quit" << endl;
        choice = getchar();
        getline(cin, secretMessage);
        switch (choice)
        {
            case 'd':
            case 'D':
                cout << "Enter a message to decrypt:" << endl;
                getline(cin, encryptedMessage);
                secretMessage = GetConvertedMessage(encryptedMessage, alphabet, key);
                cout << "Decrypted Message: " << secretMessage << endl;
                break;
            case 'e':
            case 'E':
                cout << "Enter a message to encrypt:" << endl;
                getline(cin, secretMessage);
                encryptedMessage = GetConvertedMessage(secretMessage, key, alphabet);
                cout << "Encrypted Message: " << encryptedMessage << endl;
                break;
            default:
                break;
        }
    } while (choice != 'q' && choice != 'Q');
}