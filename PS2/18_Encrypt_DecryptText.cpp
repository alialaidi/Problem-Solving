#include <iostream>

using namespace std;

string ReadText()
{
    string password;

    cout << "Enter The Text Please  : ";
    cin >> password;

    return password;
}

string EncryptText(string Text,short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i]=char((int)Text[i]+EncryptionKey);
    }
    
    return Text;

}

string DecryptText(string Text,short EncryptionKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i]=char((int)Text[i]-EncryptionKey);
    }
    
    return Text;

}
void PrintText(string Text,string EncryptedText, string DecryptedText)
{
    cout << "Original Text : " << Text << endl;
    cout << "Encrypted Text : " << EncryptedText << endl;
    cout << "Decrypted Text : " << DecryptedText << endl;
}

int main()
{
    const int EncryptionKey = 2;

    string Text = ReadText();
    string EncryptedText = EncryptText(Text,EncryptionKey);
    string DecryptedText = DecryptText(EncryptedText,EncryptionKey);
    
    PrintText(Text,EncryptedText,DecryptedText);

    return 0;
}