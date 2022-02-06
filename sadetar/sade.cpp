#include <iostream>
#include <iomanip> // for output manipulator std::setprecision()
using namespace std;

double Sumition(double n1,double n2,double n3,double n4); 
long double Average(double n1,double n2,double n3,double n4); 
double Product(double n1,double n2,double n3,double n4); 
double Maximum(double n1,double n2,double n3,double n4); 
double Minimum(double n1,double n2,double n3,double n4); 
int main() {
    double n1,n2,n3,n4;
    cin >> n1>>n2>>n3>>n4;
    if((n1>= -1000 && n1<=1000) && (n2>= -1000 && n2<=1000) && (n3>= -1000 && n3<=1000) && (n4>= -1000 && n4<=1000)){
        cout << "Sum : ";
        Sumition(n1,n2,n3,n4);
        cout << "Average : ";
        Average(n1,n2,n3,n4);
        cout << "Product : ";
        Product(n1,n2,n3,n4);
        cout << "MAX : ";
        Maximum(n1,n2,n3,n4);
        cout << "MIN : ";
        Minimum(n1,n2,n3,n4);
    }
    else{
        //// invalid numbers
    }
    return 0;
}
double Sumition(double n1,double n2,double n3,double n4){
    cout << fixed << setprecision(6);
    double sum;
    sum = n1 + n2 + n3 + n4;
    std::cout << sum<<endl;
}
long double Average(double n1,double n2,double n3,double n4){
    cout << fixed << setprecision(6);
    long double sum = n1 + n2 + n3 + n4;
    long double avg = sum/4;
    std::cout << avg <<endl;
}
double Product(double n1,double n2,double n3,double n4){
    cout << fixed << setprecision(6);
    double product;
    product = n1 * n2 * n3 * n4;
    cout << product<<endl;
}
double Maximum(double n1,double n2,double n3,double n4){
    cout << fixed << setprecision(6);
    if(n1>=n2&&n1>=n3&&n1>=n4){
        cout << n1 <<endl;
    }
    else if(n2>=n1&&n2>=n3&&n2>=n4){
        cout << n2 <<endl;
    }
    else if(n3>=n1&&n3>=n2&&n3>=n4){
        cout << n3 <<endl;
    }
    else{
        cout << n4 <<endl;
    }
}
double Minimum(double n1,double n2,double n3,double n4){
    cout << fixed << setprecision(6);
    if(n1<=n2&&n1<=n3&&n1<=n4){
        cout << n1;
    }
    else if(n2<=n1&&n2<=n3&&n2<=n4){
        cout << n2;
    }
    else if(n3<=n1&&n3<=n2&&n3<=n4){
        cout << n3;
    }
    else{
        cout << n4;
    }
}