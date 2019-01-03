/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
/* 
 * File:   Palindriome.cpp
 * Author: Shiva Shankar Ganesan
 * Description of file: The given string is added to deque and checked for palindrome
 * Created on October 20, 2018, 4:54 PM
 */

#include"Palindrome.h"


#include<iostream>
#include<deque>
#include<algorithm>


bool Palindrome::isPalindrome(std::string input){
    std::deque<char> givenInput;  //Using Deque container
    for(int i=0;i<input.size();i++){
    if(input.at(i)!='.') givenInput.push_back(input.at(i));
    }

    //Using Functionality of Deque: Comparing by accessing front and back of the deque 
    while(givenInput.size()>1){
        if(givenInput.front()==givenInput.back()){
            givenInput.pop_front();
            givenInput.pop_back();
        }else{
            break;
        }  
    }
    
    return givenInput.size()<=1;
    
 

    
}

//Alternate approach: Not using deque's method

/*bool Palindrome::isPalindrome(std::string input){
    std::deque<char> givenForm;
    for(int i=0;i<input.size();i++){
    if(input.at(i)!='.') givenForm.push_back(input.at(i));
    }
   
    std::deque<char> reversedForm;
    for(int i=input.size()-1; i>=0; i--){
        if(input.at(i)!='.') reversedForm.push_back(input.at(i));
    }
    
    //To check if the value in the deque is palindrome or not. Reversing the given input and comparing with equal algorithm.
    return (std::equal(givenForm.begin(),givenForm.end(),reversedForm.begin()));   
}*/
