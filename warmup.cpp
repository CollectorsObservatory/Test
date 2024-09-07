#include <iostream>
#include <fstream>
#include "warmup.h"

using namespace std;



Contact::Contact( const string& p_name, const string& p_email,
    const string& p_phone_number,vector <Contact> p_book ) :
    m_name(p_name), m_book(p_book), m_email(p_email) , m_phone_number
    (p_phone_number){cout << m_name << " Constructor was called" <<endl;};

    
    string Contact::getName() const{
        return m_name;}

    string Contact::getEmail() const{ 
        return m_email;}

    string Contact::getPhoneNumber() const{
        return m_phone_number;}



    void Contact::addContact(const Contact& person){
        m_book.push_back(person);
        cout <<person.getName()<< "Was added sucessfully" <<endl;
    }

    void Contact::deleteContact(const Contact& person){
        if (!(m_book.empty())){
            m_book.();
        }
       




    }













int main(){






    return 0;
}