using namespace std;
#include <iostream>
#include <fstream>
#include <string>

int main()
{
    setlocale(0, "");
    fstream inf("f.txt");
    ofstream outf("f.txt");
    string a;
    string strf = "ABCabc";
    cout << "Вводите строки:" << endl;
    for (int x = 0; x < 3; x++)
    {
        cin >> strf;
        outf << strf << "\n";
    }
    int max = -999999999;
    outf.close();
    int l = 0;
    string maxstr = "";
    while (getline(inf, a))
    {
        if ((int)a.length() > max)
        {
            l++;
            max = a.length();
            maxstr = a;
        }
    }
    inf.close();

    cout << "Строка: " << maxstr << ", ее длина: " << maxstr.length();
}
