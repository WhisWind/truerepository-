#define ERRORINTFLOAT_H

#include <unistd.h>
#include <iostream>
#include <string>

using namespace std;

int convertStringInt(string str)
{
    do{
    int n = 0;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            n++;
        }
        
    }
    
    if (n == str.length()){
        
        if(stoi(str) <= 0)
        {
            cout << "A number greater than zero is required: ";
        }
        else
        {
        return stoi(str);
        }
        
        cin >> str;
    }
    else
    {
        cout << "ERROR! Expected type - int:"<< endl;
        cin >> str;
    }
    }while(true);
}

float convertStringFloat(string str)
{
    do{
    int n = 0, point = 0;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] <= '9' && str[i] >= '0')
        {
            n++;
        }
        else if (str[i] == '.' && point <1)
        {
            point++;
        }
        
    }
    if ((n+point) == str.length()){
        
        if(stof(str) <= 0)
        {
            
            cout << "A number greater than zero is required: ";
        }
        else
        {
        
        return stof(str);
        }
        
        cin >> str;
    }
    else
    {
        cout << "ERROR! Expected type - float:";
        
        cin >> str;
    }
    }while(true);
}