#include "snowman.hpp"
#include <iostream>
#include <stdexcept>
#include <array>
using namespace std;

const int SIZE = 8, I_SIZE=7 ,M=10, H=0, N=1, L=2, R=3, X=4, Y=5, T=6, B=7;


namespace ariel 
{

    string snowman(int x)
    {
        int i=I_SIZE;
        string str1;
        string str2;
        string str3;
        string str4;
        string str5;
        string str6;
        array <int, SIZE> arr={0};
        
        
        while(x>0)
        {
            if(x%M > 4 || x%M < 1 || i < 0)
            {
                throw std::invalid_argument("Number is not allowed!" );
                break;
            }
            arr.at(i)=x%M;
            x=x/M;
            i--;
        }
        
        if (i != -1) 
        {
            throw std::invalid_argument("Number is not allowed!" );
        }


        switch (arr.at(H))
        {
        case 1:
            str1="\n _===_ \n";
            break;    
        case 2:
            str1="  ___  \n ..... \n";
            break;
        case 3:
            str1="   _   \n  /_\\  \n";
            break;
        case 4:
            str1="  ___  \n (_*_) \n";
            break;   
        }
    
        
        switch (arr.at(X))
        {
        case 1:
            str2=" (";
            break;
        case 2:
            str2="\\(";
            break;
        case 3:
            str2=" (";
            break;
        case 4:
            str2=" (";
            break;;   
        }

        switch (arr.at(L))
        {
        case 1:
            str2+=".";
            break;
        case 2:
            str2+="o";
            break;
        case 3:
            str2+="O";
            break;
        case 4:
            str2+="-";
            break;   
        }

        switch (arr.at(N))
        {
        case 1:
            str2+=",";
            break;
        case 2:
            str2+=".";
            break;
        case 3:
            str2+="_";
            break;
        case 4:
            str2+=" ";
            break;   
        }

        switch (arr.at(R))
        {
        case 1:
            str2+=".";
            break;
        case 2:
            str2+="o";
            break;
        case 3:
            str2+="O";
            break;
        case 4:
            str2+="-";
            break;   
        }

        switch (arr.at(Y))
        {
        case 1:
            str2+=") \n";
            break;
        case 2:
            str2+=")/\n";
            break;
        case 3:
            str2+=") \n";
            break;
        case 4:
            str2+=") \n";
            break;;  
        }

        switch (arr.at(X))
        {
        case 1:
            str3="<(";
            break;
        case 2:
            str3=" (";
            break;
        case 3:
            str3="/(";
            break;
        case 4:
            str3=" (";
            break;   
        }

        switch (arr.at(T))
        {
        case 1:
            str3+=" : ";
            break;
        case 2:
            str3+="] [";
            break;
        case 3:
            str3+="> <";
            break;
        case 4:
            str3+="   ";
            break;   
        }

        switch (arr.at(Y))
        {
        case 1:
            str3+=")>\n";
            break;
        case 2:
            str3+=") \n";
            break;
        case 3:
            str3+=")\\\n";
            break;
        case 4:
            str3+=") \n";
            break;   
        }

        switch (arr.at(B))
        {
        case 1:
            str4=" ( : ) ";
            break;
        case 2:
            str4=" (\" \") ";
            break;
        case 3:
            str4=" (___) ";
            break;
        case 4:
            str4=" (   ) ";
            break;   
        }

        str6=str1+str2+str3+str4+str5;
        //cout<<str6<<endl;
        return str6;
    };


}