#include <iostream>
using namespace std;

int main() {
    int pieceCount[6];
    for (int i = 1; i <= 6; i++)
    {
        cin >> pieceCount[i-1];
    }
    pieceCount[0] = 1 - pieceCount[0]; // king
    pieceCount[1] = 1 - pieceCount[1]; // queen
    pieceCount[2] = 2 - pieceCount[2]; // castles
    pieceCount[3] = 2 - pieceCount[3]; // elephents
    pieceCount[4] = 2 - pieceCount[4]; // horeses
    pieceCount[5] = 8 - pieceCount[5]; // soliders

    for (int i = 1; i <= 6; i++) {
        cout << pieceCount[i-1] << " ";
    }
    
    return 0;
}