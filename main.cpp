#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}



double Karatsuba_mul(X, Y){
    // X, Y - ����� ����� ����� n
    //n = max(������ X, ������ Y)
    if (n = 1){
     return X*Y;
    }

    /*X_l = ����� n/2 ���� X
    X_r = ������ n/2 ���� X
    Y_l = ����� n/2 ���� Y
    Y_r = ������ n/2 ���� Y*/
    Prod1 = Karatsuba_mul(X_l, Y_l);
    Prod2 = Karatsuba_mul(X_r, Y_r);
    Prod3 = Karatsuba_mul(X_l + X_r, Y_l + Y_r);
    return Prod1 * 10 ^ n + (Prod3 - Prod1 - Prod2) * 10 ^ (n / 2) + Prod2;
}



vector<int> get_number(istream& is) { //
    string snum;
    vector<int> vnum;
    // ��������� ��������
    unsigned int dig = 1;
    int n = 0;

    is >> snum;

    for (auto it = snum.crbegin(); it != snum.crend(); ++it) {
        n += (*it - '0') * dig;
        dig *= dig_size;
        // ���� ������ ����� ����, �� ����������� ����� � ������
        if (dig == base) {
            vnum.push_back(n);
            n = 0;
            dig = 1;
        }
    }

    if (n != 0) {
        vnum.push_back(n);
    }

    return vnum;
}
