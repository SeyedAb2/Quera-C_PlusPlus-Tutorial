#include <iostream>
using namespace std;

int main() {
    int result = 7;
    string days[7] = {"shanbe", "1shanbe", "2shanbe", "3shanbe", "4shanbe", "5shanbe", "jome"};
    for (int i = 0; i < 3; i++) {
        int num;
        cin >> num;
        for (int j = 0; j < num; j++) {
            string inputDay;
            cin >> inputDay;
            for (int x = 0; x < 7; x++)
            {
                if (days[x] == inputDay) {
                    days[x] = "0";
                    result--;
                }
            }
        }
    }
    cout << result << endl;
    return 0;
}
