using namespace std;
#include "iostream"
#include "fstream""

int main()
{
    setlocale(0, "");
    char symbol;
    ifstream in("f.txt");
    ofstream out("g.txt");
    while (in.peek() != EOF)
    {
        in.get(symbol);
        if (symbol == 'C')
            out << "C++";
        else

            out << symbol;
    }
    in.close();
    out.close();
    return 0;
}
