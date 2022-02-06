#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    int count,incurrent=0;
    cin >> count;
    if(count>=1 && count <=100000)
    {
        string question;
        string anwser;
        cin >> question >> anwser;
        // int questionArraySize = sizeof(question)/sizeof(question[0]);
        // int anwserArraySize = sizeof(anwser)/sizeof(anwser[0]);
        int questionArraySize = question.length();
        int anwserArraySize = anwser.length();
        if (questionArraySize == anwserArraySize)
        {
            for(int i=0; i<count;i++)
            {
                if(question[i] != anwser[i])
                {
                    incurrent +=1;
                    //cout << question[i] << " " << anwser[i] <<endl;
                }
            }
            cout << incurrent;
        }
    }
    
    return 0;
}