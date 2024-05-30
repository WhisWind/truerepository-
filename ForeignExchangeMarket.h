#define FOREIGNEXCHANGEMARKET_H

#include <unistd.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class ForeignExchangeMarket
{
    private:
        int max_num_course;
        int num_course;
        course *courses;
    
    public:
        ForeignExchangeMarket(unsigned int max_nc);
        ~ForeignExchangeMarket();
        
        void writingFile(string path);
        void readingFromFile(string path);
        void addingNewElement();
        void deletElement(int number);
        void displayingContenScreen();
        void dataSearch();
    
};