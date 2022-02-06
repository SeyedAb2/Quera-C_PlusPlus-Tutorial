#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    int strLength = t.length();
    string s[n],res[n];
    int itCode=0,sameCode=0;
    for(int i=0;i<n;i++){
      cin >> s[i];
      int inputLength = s[i].length();
      int m=0;
      while (m<strLength){
        int x=0;
        while (x<inputLength){
          if (s[i][x]==t[m]){
            sameCode +=1;
            break;
          }
          x++;
        }
        m++;
      }
      int k = 0;
      while(k<inputLength){
        int b = 0;
        while (b<strLength){
          if (s[i][k]==t[b]){
            itCode+=1;
            break;
          }
          b++;
        }
        k++;
      }
      if(sameCode>=strLength && itCode>=inputLength){
        res[i]="Yes";
      }
      else{
        res[i]="No";
      }
      itCode=0;
      sameCode=0;
    }
    for(int i=0;i<n;i++){
      cout <<res[i]<<endl;
    }
  return 0;
}
// int main() {
//     int n;
//     cin >> n;
//     string t;
//     cin >> t;
//     string s[n],res[n];
//     int itCode=0,sameCode=0;
//     for(int i=0;i<n;i++){
//       cin >> s[i];
//       int m=0;
//       while (m<int(t.length())){
//         int x=0;
//         while (x<int(s[i].length())){
//           if (s[i][m]==t[x]){
//             sameCode +=1;
//             break;
//           }
//           x++;
//         }
//         m++;
//       }
//       int k = 0;
//       while(k<int(s[i].length())){
//         int b = 0;
//         while (b<int(t.length())){
//           if (s[i][b]==t[k]){
//             itCode+=1;
//             break;
//           }
//           b++;
//         }
//         k++;
//       }
//       if (sameCode<int(t.length()) && itCode<int(s[i].length())){
//         res[i]="No";
//       }else{
//         res[i]="Yes";
//       }
      
//     }
//     for(int i=0;i<n;i++){
//       cout <<res[i]<<endl;
//     }
//   return 0;
// }

// int main(){
//   int n;
//   string  gen;
//   cin>>n>>gen;
//   string new1[n];
//   string output[n]; 
//   int k=gen.length();
//   for (int i=0; i<n;i++){
//     int counter=0,counter2=0;
//     cin>>new1[i];
    
//     int b=new1[i].length();
//     for (int j=0;j<b; j++){
      
//       for (int h=0;h<k;h++){
//         if (new1[i][j]==gen[h]){
//           counter++;
//           break;
//         }
//       }
//     }
//     for (int j=0;j<k; j++){
//       for (int h=0;h<b;h++){
//         if (new1[i][h]==gen[j]){
//           counter2++;
//           break;
//         }
//       }
//     }
//     if (counter>=b && counter2>=k){
//       output[i]="Yes";
//     }else{
//       output [i]="No";
//     }
//   }
//   for (int i=0;i<n;i++){
//     cout<< output[i]<<endl;
//   }
//   return 0;
// }