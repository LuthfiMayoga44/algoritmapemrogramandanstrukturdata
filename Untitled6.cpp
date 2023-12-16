#include<iostream>

using namespace std;

int main() {
    int ilham, raka, rafli;

    //clrscr();

    ilham = 75;

    int *p_raka = &ilham;
    raka = *p_raka;

    rafli = *p_raka;

    cout << "Nilai ILHAM = " << ilham << endl;
    cout << "Nilai RAKA = " << raka << endl;
    cout << "Nilai RAFLI = " << rafli << endl;

    getchar();

    return 0;
}

