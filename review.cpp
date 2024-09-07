/**
 * This file would be used to review my basic knowledge in C++ 
 */
#include <iostream>
#include <string>
using namespace std ; 

bool format_cin (const string& cin) {
    for (int i = 0 ; i< cin.size(); i++) { // to check if all digits of the ID are numbers
        if (!isdigit(cin[i])) {return false;}}
    if (cin.size()!= 8) {return false;}   // to check if its only made up of 8 numbers
    return true ;

}

bool military_service(const string& cin){
    return (cin[0] == '1' || cin[1] == '4');  // if the first and second number are one and 4 it means 
                                              // the person is invited for militayr service
}


class Citizen { 

    private : 
    string m_fullname; 
    string m_cin ; 


    public :
    Citizen (string p_fullname, string p_cin ) {
        m_fullname = p_fullname ;
        m_cin = p_cin ;
    }

};

int main(){
    cout << "Hello World" << endl; 
    cout << "Changed file remotely" << endl; 





    return 0; 
}



