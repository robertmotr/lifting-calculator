#include <iostream>

using namespace std;

int main() {

    float num;
    cin >> num;

    num -= 45;

    float plates[] = {90, 50, 20, 10, 5};

    int i = 0;
    while(true) {
        int rs = num - plates[i];
        if(rs < 0) {
            i++;
        }
        else if(rs > 0) {
            cout << "2 " << (float) (plates[i] / 2) << "s, ";
            num = rs;
        }
        else {
            cout << "and 2 " << (float) (plates[i] / 2) << "s" << endl;
            break;
        }

    }
    system("pause");
    return 0;
}