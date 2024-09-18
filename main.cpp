#include <iostream>
using namespace std;

int main()
{
    double r_1, r_2, r_3;
    cout << "enter three numbers to calculate a 3rd degree polynomial that has the numbers as roots \n";
    cin >> r_1 >> r_2 >> r_3;

    /*i muted this part to use the chatgpt-improved part in stead
    cout << "x^3-" << r_1 + r_2 + r_3 << "x^2+" << r_1 * r_2 + r_2 * r_3 + r_3 * r_1  << "x-" << r_1 * r_2 * r_3 << endl;
    */

    //this last part has been improved by chatgpt
    double B = -(r_1 + r_2 + r_3);
    double C = r_1 * r_2 + r_2 *r_3 + r_3 * r_1;
    double D = -r_1 * r_2 * r_3;

    cout << "the 3rd degree polynomial is; x^3";
    if (B < 0) cout << "- " << -B << "x^2 ";
    else cout << "+ " << B << "x^2 ";
    if (C < 0) cout << "- " << -C << "x ";
    else cout << "+ " << C << "x ";
    if (D < 0) cout << "- " << -D << "\n";
    else cout << "+ " << D << "\n";

}
