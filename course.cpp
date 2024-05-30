#include "course.h"
#include "ErrorIntFloat.h"
#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;

void course::fillingStructure (ifstream & fin)
{
    string str;
    
        fin >> currency;
        fin >> state;
        fin >> code;
        fin >> subunit;
        fin >> str;
        fraction = ErrorIntFloat::convertStringInt(str);
        fin >> str;
        rate = ErrorIntFloat::convertStringFloat(str);
}

void course::output()
{
        cout << currency << "        " << rate << "\n";
}

int course::currencyExpensiveUSD(int i, float USD)
{
    
    if (rate > USD)
    {
    	cout << "-------------- " << i + 1 << " currency --------------\n";
        cout << "Currency:" << currency <<"\n";
        cout << "State:" << state <<"\n";
        cout << "Code:" << code <<"\n";
        cout << "Subunit:" << subunit <<"\n";
        cout << "Fraction:" << fraction <<"\n";
        cout << "Rate:" << rate <<"\n";
        cout << "\n";
        
        return 1;
        
    }
    
    return 0;
}

void course::fillingArray(int i)
{
    string str;
        cout << "-------------- " << i + 1 << " currency --------------\n";
        cout << "Currency:"; cin >> currency;
        cout << "State:"; cin >> state;
        cout << "Code:"; cin >> code;
        cout << "Subunit:"; cin >> subunit;
        cout << "Fraction:";cin >> str;
        fraction = convertStringInt(str);
        cout << "Rate:"; cin >> str; 
        rate = ErrorIntFloat::convertStringFloat(str); 
}

void course::fillingFile(ofstream & fout)
{
    fout << currency <<" " << state <<" " << code <<" " << subunit <<" " << fraction <<" " << rate << endl;
}