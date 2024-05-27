#include <iostream>
#include "resume.h"


void section_separator() {
    std::cout<<"------------------------------------------------------------------------------------------------------------"<<"\n";
}
int main() {
    
    parse_resume_from_json("../resume.json");

    std::cout<<"\n";
    std::cout << "PERSONAL INFORMATION:\n";
    print_personal_info();
    section_separator();
    
    std::cout << "EXPERIENCE:\n\n";
    print_experience();
    section_separator();

    return 0;
}