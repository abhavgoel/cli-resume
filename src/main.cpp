#include <iostream>
#include "resume.h"

void section_separator() {
    std::cout<<"------------------------------------------------------------------------------------------------------------"<<"\n";
}
void choice_handler(char choice) {
    switch (choice) {
        case int('1'): print_personal_info();break;
        case int('2'): print_experience();break;
        case '3': print_education();
        // case '4': print_projects();
        // case '5': print_skills();
        case 'q': exit(0);
        default: std::cout << RED << "Invalid option!" << RESET <<std::endl;
    }
}

void display_options() {
    std::cout << "Choose an option:" << std::endl;
    std::cout << "1. Personal Info" << std::endl;
    std::cout << "2. Experience" << std::endl;
    // std::cout << "3. Education" << std::endl;
    // std::cout<<"4. Projects"<< std::endl;
    // std::cout<<"5. Skills"<< std::endl;
    std::cout<<"q to quit"<<std::endl;
}
int main() {
    
    parse_resume_from_json("../resume.json");
;
    std::cout<< RED <<"Welcome to Abhav Goel's resume."<<RESET<<std::endl;
    while(true) {
        display_options();
        char opt;
        std::cin>>opt;
        choice_handler(opt);
        section_separator();

    }

    // std::cout<<"\n";
    // print_personal_info();
    // section_separator();
    
    // print_experience();
    // section_separator();

    return 0;
}