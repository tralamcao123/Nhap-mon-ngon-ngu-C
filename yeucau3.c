#include <iostream>
using namespace std;
 
int main() {
    int i, so1, so2, min, ucln = 1;
 
    cout << "Nhap a: ";
    cin >> so1;
    cout << "Nhap b: ";
    cin >> so2;
    if(so1 == 0 && so2 == 0) {
        cout << "Hai so 0 khong co uoc chung lon nhat" << endl;
    } else if (so1 != 0 && so2 == 0) {
        cout << "UCLN cua " << so1 << " va " << so2 << " la " << abs(so1) << endl;
    } else if (so1 == 0 && so2 != 0) {
        cout << "UCLN cua " << so1 << " va " << so2 << " la " << abs(so2) << endl;
    } else {
        if(so1 < so2) {
            min = so1;
        } else {
            min = so2;
        }
         
        for(int i = 1; i <= min; i++) {
            if(so1%i == 0 && so2%i == 0) {
                ucln = i;
            }
        }
        cout << "Uoc chung lon nhat cua " << so1 << " va " << so2 << " la " << ucln << endl;
    }
    return 0;
}
