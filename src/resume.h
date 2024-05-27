#ifndef RESUME_H
#define RESUME_H

#include <string>
#include <vector>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"


struct PersonalInfo {
    std::string name;
    std::string phone;
    std::string email;
    std::string linkedin;
    std::string github;
    std::string leetcode;
};

struct Experience {
    std::string company;
    std::string position;
    std::string location;
    std::string startDate;
    std::string endDate;
    std::vector<std::string> responsibilities;
};

struct Education {
    std::string institution;
    std::string degree;
    std::string score;
    std::string startDate;
    std::string endDate;
    std::string location;
};

struct Project {
    std::string name;
    std::string technologies;
    std::string link;
    std::vector<std::string> description;
};

void parse_resume_from_json(const std::string& file_path);
void print_personal_info();
void print_experience();
void print_education();
void print_projects();
void print_achievements();
void print_responsibilities();
void print_skills();

#endif