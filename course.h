#define COURSE_H

#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;

class course
{
    private:
        string currency;
        string state;
        string code;
        string subunit;
        int fraction;
        float rate;
        
    public:
        void fillingStructure (ifstream & fin);
        void output();
        int currencyExpensiveUSD(int i, float USD);
        void fillingArray(int i);
        void fillingFile(ofstream & fout);
        
};