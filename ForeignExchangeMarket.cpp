#include <unistd.h>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

ForeignExchangeMarket(unsigned int max_nc)
{
    max_num_course = max_nc;
    courses = new course[max_num_course];
    num_course = 0;
    cout << "\nВызван конструктор класса bookstore:";
    cout << "\n выделено объектов - " << max_num_course;
    cout << "\n загружено иностранной валюты - " << num_course << endl;
}

ForeignExchangeMarket::~ForeignExchangeMarket()
{
max_num_course = 0;
delete[] courses;
num_course = 0;
cout << "\nВызван деструктор класса bookstore:";
cout << "\n выделенная память освобождена";
}

void ForeignExchangeMarket::writingFile(string path)
{
    int number;
    string str;
    
    ofstream fout;
    fout.open(path);
        
    if(!fout.is_open()){
        cout << "File opening error" <<endl;
    }
    
    cout << "What is the amount of input data ?" << endl;
    cout << "Enter number:";
    
    cin >> str;
    num_course; 
    
    fout <<  num_course <<endl;
    
    for(int i = 0; i < num_course; i++)
    {
        curses[i].fillingFile(fout);
    }
    
    fout.close();
}

void ForeignExchangeMarket::readingFromFile(string path)
{
    int number, flag = 0;
    string str;
    
    ifstream fin;
    fin.open(path);
        
    if(!fin.is_open()){
        cout << "File opening error" <<endl;
    }
    
    if (file.peek() != std::ifstream::traits_type::eof()) 
    {
        fin >> str;
        number = num_course + ErrorIntFloat::convertStringInt(str);
        
        for(num_course; num_course < number ; num_course++)
        {
            if (num_course < max_num_course)
            {
            curses[num_course].fillingStructure (fin);
            }else{
                cout << "All selected objects have been filled in."; 
                break;
                }
        }
    } else {
        std::cout << "File is empty" << std::endl;
    }
    fin.close();
}

void ForeignExchangeMarket::addingNewElement()
{
    if (num_course < max_num_course)
    {
    fillingArray(num_course);
    }else{
        cout << "All selected objects have been filled in."; 
        }
}

void ForeignExchangeMarket::deletElement(int number)
{
    if (number < num_corse)
    {
        for(number; number < num_corse; number ++)
        {
            courses[number] = courses[number+1];
        }
        num_corse -= 1;
    }
}

void ForeignExchangeMarket::displayingContenScreen()
{
    cout << "\n\n-------- Currency and exchange rate in rubles --------\n";
    cout << "Currency | Rate\n";
    
    for(int i = 0; i < num_corse ; i++)
    {
        curses[i].output();
    }
}

void ForeignExchangeMarket::dataSearch()
{
    int flag = 0;
    string str;
    float USD;
    
    
    cout << "\n\nEnter the actual dollar exchange rate.\nEnter USD:";
    cin >> str;
    USD = ErrorIntFloat::convertStringFloat(str);
    
    cout << "\n\n-------------- All currency information --------------\n\n";
    
    for(int i = 0; i < number ; i++)
    {
        flag += curses[i].currencyExpensiveUSD(i, USD);
    }
    
    if (flag == 0){
    cout << "Result not found\n";
    }
}




