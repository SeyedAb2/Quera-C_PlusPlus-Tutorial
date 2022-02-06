#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int lengthOfWord;
    string word,tempWord;
    char charTemp;
    cin >> word;
    tempWord = word;
    lengthOfWord = word.length();
    if(lengthOfWord >=1 && lengthOfWord <=20)
    {
        for(int i = 1;i<=lengthOfWord;i++)
        {
            cout << word<<endl;
            charTemp = word[i];
            for(int j=0;j<=i;j++)
            {
                word[j] = charTemp;
            }
        }
    }
    return 0;
}

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main() {
//     int lengthOfWord;
//     string word;
//     cin >> word;
//     lengthOfWord = word.length();
//     char char_array[lengthOfWord + 1];
//     string tempWord;
//     char tempChar;
//     tempWord = char_array[lengthOfWord + 1];
//     if(lengthOfWord >=1 && lengthOfWord <=20)
//     {
//         strcpy(char_array, word.c_str());
//         cout << word <<endl;
//         for (int i = 0; i < lengthOfWord; i++)
//         {
//             tempChar = char_array[i+1];
//             for(int j=0;j<=i;j++)
//             {
//                 tempWord[j] = tempChar;
//                 //cout << char_array[i];
//                 //tempWord = char_array[i];
//                 cout << tempWord;
//             }
//             cout << endl;
//         }
            
//         //cout << lengthOfWord <<endl << word;
//     }
//     else
//     {
//         ///// invalid length
//     }

//     return 0;
// }