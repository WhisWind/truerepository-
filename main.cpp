#include <unistd.h>
#include "ErrorIntFloat.h"
#include "course.h"
#include "ForeignExchangeMarket.h"
#include <iostream>
#include <limits>
#include <string>
#include <fstream>

using namespace std;


void errorChoosingActions(string &str)
{
    while(ErrorIntFloat::convertStringInt(str) <= 0 || ErrorIntFloat::convertStringInt(str) > 7)
    {
        cout << "Input error: incorrect data was entered."<<endl;
        cout << "\nEnter your action number:";
        cin >> str;
    }
}

void shutdownEffect()
{
    cout << "\n\n------------Completion of the program------------"<<endl;
    
    for(int i = 3; i > 0; i--)
    {
        cout << i <<"..." <<endl;
        sleep(1);
    }
    
    cout << "The program is completed :)";
}

int main()
{
    
    string str;
    int choosingActions;
    
    do{
        cout << "\n-----Welcome to the program for working with currency exchange rates-----\n" <<endl;
        cout << "Select the action you want to perform:\n"<<endl;
        cout << "1) Adding a new element." <<endl;
        cout << "2) Removing an item from the collection." <<endl;
        cout << "3) Download from a file." <<endl;
        cout << "4) Write to a file." <<endl;
        cout << "5) Display the content on the screen." <<endl;
        cout << "6) Output data on currencies whose exchange rate is lower than the dollar." <<endl;
        cout << "7) Exit the program." <<endl;
        cout << "\n\nEnter your action number:";
        
        cin >> str;
        errorChoosingActions(str);
        choosingActions = ErrorIntFloat::convertStringInt(str);
        
        switch(choosingActions){
            
            case 1:
                onlyFile();
                break;
            
            case 2:
                consoleFile();
                break;
            
            case 3:
                shutdownEffect();
                break;
                
            case 4:
                shutdownEffect();
                break;
                
            case 5:
                shutdownEffect();
                break;
                
            case 6:
                shutdownEffect();
                break;
        }
        
    }while(choosingActions !=3);
    
    return 0;
}