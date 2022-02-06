#include <iostream>
using namespace std;
int counter = 0 , Jamshid , Farshid , Mahshid , Nooshid;
int table[4];
int J = 0 , F = 0 , M = 0 , N = 0;

int JamshidChocolate();
int FarshidChocolate();
int MahshidChocolate();
int NooshidChocolate();
int main(){ 
    for(int i=0;i<4;i++)
        cin>>table[i];
    while(1){
        if(table[0] == 0 || table[1] == 0 || table[2] == 0 || table[3] == 0){
            break;
        }
        Jamshid = table[0];
        Farshid = table[1];
        Mahshid = table[2];
        Nooshid = table[3];
        if(counter == 0){
            JamshidChocolate();
        }else if(counter == 1){ 
            FarshidChocolate();
        }else if(counter == 2){
            MahshidChocolate();
        }else if(counter == 3){
            NooshidChocolate();
        }
    }
    cout<<J<<" "<<F<<" "<<M<<" "<<N;
    return 0;
}

int JamshidChocolate(){
    J++;
    counter++;
    table[0]--;
    table[3] = table[0];
    table[2] = Nooshid;
    table[1] = Mahshid;
    table[0] = Farshid;
    return 0;
}
int FarshidChocolate(){
    F++;
    counter++;
    table[1]--;
    table[0] = table[1];
    table[3] = Jamshid;
    table[1] = Mahshid;
    table[2] = Nooshid;
    return 0;
}
int MahshidChocolate(){
    M++;
    counter++;
    table[2]--;
    table[1] = table[2];
    table[0] = Farshid;
    table[3] = Jamshid;
    table[2] = Nooshid;
    return 0;
}
int NooshidChocolate(){
    N++;
    table[3]--;
    table[2] = table[3];
    table[3] = Jamshid;
    table[0] = Farshid;
    table[1] = Mahshid;
    counter = 0;
    return 0;
}