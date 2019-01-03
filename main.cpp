

/* 
 * File:   main.cpp
 * Author: Shiva Shankar Ganesan
 * Description of file: Driver program
 * Created on October 20, 2018, 4:54 PM
 */

#include <cstdlib>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
#include<sstream>

#include"Palindrome.h"

//usingnamespace std;

int main() {
std::cout<<"Palindrome objects are:" << "\n";
std::string line;
std::ifstream in("test10.txt");
Palindrome object;
if(in.fail()){
   std::cout<<"Your file didn't work"<< std::strerror(errno);
 } else{
    while(!in.eof()){
        while(std::getline(in,line)){
            std::vector<std::string> inputs;
            std::istringstream ss (line);
            std::string temp;
            while(std::getline(ss,temp,',')){
                inputs.push_back(temp);
            }
            
            std::cout<<"[";
            int numberOfPalindromes=0;
            for(std::vector<std::string>::const_iterator i=inputs.begin(); i!=inputs.end();++i){
                if(object.isPalindrome(*i)){
                    if(numberOfPalindromes!=0) std::cout<< ",";
                    std::cout<<*i;
                    numberOfPalindromes++;
                }
               
            }
            std::cout<<"]";
            std::cout<<std::endl;
        }
 }
}
}

