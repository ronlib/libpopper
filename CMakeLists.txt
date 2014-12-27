cmake_minimum_required(VERSION 2.8)

project(libpopper)

# setting preferences
set(CMAKE_VERBOSE_MAKEFILE on)

# setting source files
set(LIBPOPPER_SOURCES popper.cpp)

find_package(Qt4 COMPONENTS QTCORE QTGUI)

# adding necessary QT include directories
include_directories(${QT_INCLUDES})

# adding library
add_library(${PROJECT_NAME} SHARED ${LIBPOPPER_SOURCES})

# adding dependencies
target_link_libraries(${PROJECT_NAME} ${QT_QTGUI_LIBRARIES})

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
    #message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()
