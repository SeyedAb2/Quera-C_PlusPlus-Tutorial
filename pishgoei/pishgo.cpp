
#include<iostream>
#include<string>

 using namespace std;


int main(){
    int m,n;
    cin>>n>>m;
    string response[n*2],goatDefualt[m],barbarAnwser;

    for (int i = 0; i < 2*n; i++)
    {
        cin>>response[i];
    }
    int j = 0;
    while (j< m)
    {
        cin>>goatDefualt[j];
        j++;
    }

    for (int stepCount = 0; stepCount < m; stepCount++)
    {
        string answer = "";
        int term=0;
        while (term < 2*n)
        {
            if (goatDefualt[stepCount]==response[term])
            {
                answer =  response[term+1]+" kachal! ";
            }
            term =term + 2;
        }
        answer = "kachal! ";
        barbarAnwser.append(answer);
        
    }

    cout<<barbarAnwser; 
    
    return 0;
}