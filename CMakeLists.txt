cmake_minimum_required(VERSION 3.20)
project(cppm)

set(CMAKE_CXX_STANDARD 98)

add_executable(cppm    m4/ex03/AMateria.cpp m4/ex03/AMateria.hpp m4/ex03/ICharacter.cpp m4/ex03/ICharacter.hpp m4/ex03/IMateriaSource.cpp m4/ex03/IMateriaSource.hpp m4/ex03/Ice.cpp m4/ex03/Ice.hpp m4/ex03/Cure.cpp m4/ex03/Cure.hpp m4/ex03/MateriaSource.cpp m4/ex03/MateriaSource.hpp m4/ex03/Character.cpp m4/ex03/Character.hpp m4/ex03/main.cpp m5/ex00/Bureaucrat.cpp m5/ex00/Bureaucrat.hpp m5/ex00/main.cpp)
