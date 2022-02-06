#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    float Weight,Height,BMI;
    cin >> Weight >> Height;
    if ((Weight>=1 && Weight<=200) && (Height>=1 && Height<=10))
    {
        BMI = Weight/(Height*Height);
        if (BMI < 18.5)
        {
            cout << BMI<<endl<<"Underweight";
        }
        else if (BMI >= 18.5 && BMI <25)
        {
            cout << BMI<<endl<<"Normal";
        }
        else if (BMI >= 25 && BMI <30)
        {
            cout << BMI<<endl<<"Overweight";
        }
        else
        {
            cout << BMI<<endl<<"Obese";
        }
        
    }
    
    return 0;
}