#ifndef RESUME_H
#define RESUME_H

#include <string>
#include <vector>


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
    std::string cgpa;
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