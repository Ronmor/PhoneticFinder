#include <iostream>
//#include <string.h>
#include <string>
#include "PhoneticFinder.hpp"

using namespace std;


namespace phonetic{

int someBodySucksAtHisJob(char t, char w){
        /*
    t = tolower(t);
    w = tolower(w);
    if((t=='w'&& w=='v')||(t=='v' && w=='w'))
        return 1;
    if((t=='b'&& w=='f')||(t=='f' && w=='b'))
        return 1;
    if((t=='b'&& w=='p')||(t=='p' && w=='b'))
        return 1;
    if((t=='f'&& w=='p')||(t=='p' && w=='f'))
        return 1;
    if((t=='g'&& w=='j')||(t=='j' && w=='g'))
        return 1;
    if((t=='c'&& w=='k')||(t=='k' && w=='c'))
        return 1;
    if((t=='c'&& w=='q')||(t=='q' && w=='c'))
        return 1;
    if((t=='k'&& w=='c')||(t=='c' && w=='k'))
        return 1;
    if((t=='q'&& w=='k')||(t=='k' && w=='q'))
        return 1;
    if((t=='s'&& w=='z')||(t=='z' && w=='s'))
        return 1;
    if((t=='d'&& w=='t')||(t=='t' && w=='d'))
        return 1;
    if((t=='o'&& w=='u')||(t=='u' && w=='o'))
        return 1;
    if((t=='i'&& w=='y')||(t=='y' && w=='i'))
        return 1;
      */
    return 0;
}

string find(string text ,string currentword){
    /*
    string eureka ;
    int index=0, i=0;
        if(currentword == "" || currentword ==" "){
            throw string("Sorry, what are you looking for again?");
        }
    while(i < text.length()){
        if(text[i] == currentword[i]){
            eureka += text[i];
            i++;
            index++;
        }else{
            if(someBodySucksAtHisJob(text[i], currentword[i])){
                eureka += text[i];
                i++;
                index++;
            }
            else{
                eureka.clear();
                index=0;
                 
                while(text[i] ==' '){
                    i++;
                }
            }
        }
        if(index == currentword.length()){
            if(i+1 == text.length()){
                return eureka;
            }
        else if(text[i+1] == ' '){
            return eureka;
            }
        }
        throw string("There is no such word in this message");
        break;
    }
    */
    return "----The End----";
    
}
}