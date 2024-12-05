#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H
#include "engineer.h"

class CivilEngineer : public Engineer{
    
    friend std::ostream& operator<<(std::ostream& , const CivilEngineer& operand);

    public :
        CivilEngineer(); 
        ~CivilEngineer();

        void build_road(){
            //get_full_name();  // Compiler error ( because of private inheritance! that ...)
            //m_full_name = "Gary Hunters"; // Compiler error ( because of private inheritance! that...)
            //m_age = 35;   // Compiler error ( because of private inheritance - that engineer class made!)
        }
    
    private :
        std::string m_speciality{"None"};
};

#endif  // CIVIL_ENGINEER_H