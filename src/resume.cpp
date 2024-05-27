#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include "resume.h"
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

// Data structures to hold parsed resume data
PersonalInfo personal_info;
std::vector<Experience> experiences;
std::vector<Education> education;
std::vector<Project> projects;
std::vector<std::string> achievements;
std::vector<Experience> responsibilities;
std::vector<std::string> technical_skills;
std::vector<std::string> frameworks;
std::vector<std::string> tools;
std::vector<std::string> os;

//function to parse the resume and populate fields
void parse_resume_from_json(const std::string& file_path) {
    
    std::ifstream file(file_path);
    if (!file.is_open()) {
        std::cerr << "Failed to open file: " << file_path << std::endl;
        return;
    }

    nlohmann::json json_data;
    file >> json_data;

    // Personal info
    auto personal_info_json = json_data["personal_info"];
    personal_info.name = personal_info_json["name"];
    personal_info.phone = personal_info_json["phone"];
    personal_info.email = personal_info_json["email"];
    personal_info.linkedin = personal_info_json["linkedin"];
    personal_info.github = personal_info_json["github"];
    personal_info.leetcode = personal_info_json["leetcode"];

    // work experience
    auto experience_json = json_data["experience"];
    for (const auto& exp_json : experience_json) {
        Experience exp;
        exp.company = exp_json["company"];
        exp.position = exp_json["position"];
        exp.location = exp_json["location"];
        exp.startDate = exp_json["startDate"];
        exp.endDate = exp_json["endDate"];
        exp.responsibilities = exp_json["responsibilities"].get<std::vector<std::string>>();
        experiences.push_back(exp);
    }

    // Education
    // auto education_json = json_data["education"];
    // for (const auto& edu_json : education_json) {
    //     Education edu;
    //     edu.institution = edu_json["institution"];
    //     edu.degree = edu_json["degree"];
    //     edu.cgpa = edu_json["cgpa"];
    //     edu.startDate = edu_json["startDate"];
    //     edu.endDate = edu_json["endDate"];
    //     edu.location = edu_json["location"];
    //     education.push_back(edu);
    // }

    // // Projects
    // auto projects_json = json_data["projects"];
    // for (const auto& proj_json : projects_json) {
    //     Project proj;
    //     proj.name = proj_json["name"];
    //     proj.technologies = proj_json["technologies"];
    //     proj.link = proj_json["link"];
    //     proj.description = proj_json["description"].get<std::vector<std::string>>();
    //     projects.push_back(proj);
    // }

    // // Achievements
    // achievements = json_data["achievements"].get<std::vector<std::string>>();

    // // Responsibilities
    // auto responsibilities_json = json_data["responsibilities"];
    // for (const auto& resp_json : responsibilities_json) {
    //     Experience resp;
    //     resp.position = resp_json["position"];
    //     resp.company = resp_json["organization"];
    //     resp.startDate = resp_json["startDate"];
    //     resp.endDate = resp_json["endDate"];
    //     resp.location = resp_json["location"];
    //     resp.responsibilities = resp_json["responsibilities"].get<std::vector<std::string>>();
    //     responsibilities.push_back(resp);
    // }

    // // Skills
    // auto skills_json = json_data["skills"];
    // technical_skills = skills_json["technical"].get<std::vector<std::string>>();
    // frameworks = skills_json["frameworks"].get<std::vector<std::string>>();
    // tools = skills_json["tools"].get<std::vector<std::string>>();
    // os = skills_json["os"].get<std::vector<std::string>>();
}

//functions to print the information
void print_personal_info() {
    // std::cout << "\033[1mPersonal Information:\033[0m\n";
    std::cout << "Name: \033[34m" << personal_info.name << "\033[0m\n";
    std::cout << "Phone: " << personal_info.phone << "\n";
    std::cout << "Email: \033[36m" << personal_info.email << "\033[0m\n";
    std::cout << "LinkedIn: \033[32m" << personal_info.linkedin << "\033[0m\n";
    std::cout << "GitHub: \033[32m" << personal_info.github << "\033[0m\n";
    std::cout << "LeetCode: \033[32m" << personal_info.leetcode << "\033[0m\n\n";
}

void print_experience() {
    // std::cout << "Experience:\n";
    for (const auto& exp : experiences) {
        std::cout << "Company: " << exp.company << "\n";
        std::cout << "Position: " << exp.position << "\n";
        std::cout << "Location: " << exp.location << "\n";
        std::cout << "Duration: " << exp.startDate << " - " << exp.endDate << "\n";
        std::cout << "Responsibilities:\n";
        for (const auto& resp : exp.responsibilities) {
            std::cout << "- " << resp << "\n";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
}


void print_skills() {
    std::cout << "Skills:\n";
    std::cout << "Technical Skills: ";
    for (const auto& skill : technical_skills) {
        std::cout << skill << ", ";
    }
    std::cout << "\nFrameworks: ";
    for (const auto& framework : frameworks) {
        std::cout << framework << ", ";
    }
    std::cout << "\nDeveloper Tools: ";
    for (const auto& tool : tools) {
        std::cout << tool << ", ";
    }
    std::cout << "\nOperating Systems: ";
    for (const auto& os_name : os) {
        std::cout << os_name << ", ";
    }
    std::cout << "\n\n";
}
