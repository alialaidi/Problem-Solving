#include <iostream>

using namespace std;

string ReadPassword()
{
    string password;

    cout << "Enter 3-Letters password ( Of All Capital )  : ";
    cin >> password;

    return password;
}
bool GuessPassword(string OriginalPassword)
{
    int Counter = 0;
    string word="";
     for (int i = 65; i <= 90; i++){
         for (int j = 65; j <= 90; j++){
             for (int k = 65; k <= 90; k++){ 
                Counter++;
                word+=char(i);
                word+=char(j);
                word+=char(k);
                cout << "Trial [" << Counter << "] : "<<word << endl;
                if (word == OriginalPassword)
                {
                    cout << "Password is : " << word << endl;
                    cout << "Number of attempts : " << Counter <<" Trial(s)"<< endl;
                    return true;
                }
                word = "";

            }
        }
    }
    cout << "Password is not found" << endl;
    return false;
}
int main()
{
    GuessPassword(ReadPassword());
    return 0;
}