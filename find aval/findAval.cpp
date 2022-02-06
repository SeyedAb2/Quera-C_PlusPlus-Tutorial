#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;  
    int temp = n;
    int b=0;
    int count;
    bool breakLoop = false;
    int counter = 1;
    if(n >= 1 && n<= int(pow(10,5)))
    {
        while (n > 0) 
        { 
            b += n % 10; /// sum all degit number
            n = n / 10;
        }
        int i=temp;
        while(!breakLoop)
        {
            count = 0;
            i++;
            for(int j=1;j<=i;j++)
            {
                if(i%j == 0)
                {
                    if(i == 1)
                    {
                        count = 2;
                        counter = b;
                        break;
                    }
                    else
                    {
                        count++;
                    }
                }
                
                // if(count == 2 && counter == b)
                // {
                //     cout << i;
                //     breakLoop = true;
                //     break;
                // }
                // else if (count==2)
                // {
                //     counter++;
                // }
            }
            if(count == 2){
                counter++;
            }
            if(count == 2 && counter == b + 1)
            {
                cout << i;
                breakLoop = true;
            }
            // else{
            //     cout << "not prime";
            //     breakLoop = true;
            // }
            
        }
    
    }
    
    return 0;
}


    
// while(i<int(pow(10,5))) {
        
//         count = 0;
//         for (j=1;j <= i;j++){
//             if(i%j==0){
//                 count++;
//             }
//             if(count==2 && counter==b) {
//                 cout << i;
//                 break;
//             }
//             else if(count==2){
//                 counter++;
//             }
//         }
//         i++;
//         break;
//     }