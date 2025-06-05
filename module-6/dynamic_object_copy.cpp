#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>
#include <iterator>
#include <stdlib.h>
#include <math.h>

using namespace std;

class Cricketer
{
public:
    int jersey_no;
    string country;

    Cricketer(int jersey_no, string country)
    {
        this->jersey_no = jersey_no;
        this->country = country;
    }
};

int main()
{
    Cricketer *dhoni = new Cricketer(7, "India");
    Cricketer *kholi = new Cricketer(18, "India");
    // kholi->country = dhoni->country;
    // kholi->jersey_no = dhoni->jersey_no;
    *kholi = *dhoni;

    delete dhoni;

    // cout << dhoni->jersey_no << endl;
    cout << kholi->jersey_no << endl;

    return 0;
}
