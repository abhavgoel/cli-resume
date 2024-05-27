cmake_minimum_required(VERSION 3.14)
project(cli-resume)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Download and include nlohmann/json library
include(FetchContent)
FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.2 # or any other tag/commit you want to use
)
FetchContent_MakeAvailable(nlohmann_json)

# Add source files
add_executable(abhav-resume
    src/main.cpp
    src/resume.cpp
)

# Link libraries
target_link_libraries(abhav-resume nlohmann_json::nlohmann_json)