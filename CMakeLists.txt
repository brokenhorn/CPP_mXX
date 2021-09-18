cmake_minimum_required(VERSION 3.20)
project(cppm)

set(CMAKE_CXX_STANDARD 98)

add_executable(cppm  m5/ex03/main.cpp    m5/ex03/Bureaucrat.cpp m5/ex03/Bureaucrat.hpp  m5/ex03/Form.cpp m5/ex03/Form.hpp m5/ex03/ShrubberyCreationForm.cpp m5/ex03/ShrubberyCreationForm.hpp m5/ex03/RobotomyRequestForm.cpp m5/ex03/RobotomyRequestForm.hpp m5/ex03/PresidentialPardonForm.cpp m5/ex03/PresidentialPardonForm.hpp m5/ex03/Intern.cpp m5/ex03/Intern.hpp)
