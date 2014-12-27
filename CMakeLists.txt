cmake_minimum_required(VERSION 2.8)

project(popper)

set(${PROJECT_NAME}_SOVERSION 1)

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

set_property(	TARGET ${PROJECT_NAME}
				PROPERTY SOVERSION ${${PROJECT_NAME}_SOVERSION})

install(FILES popper.h DESTINATION include)
install(TARGETS ${PROJECT_NAME}
		LIBRARY DESTINATION lib
		NAMELINK_ONLY)

#get_cmake_property(_variableNames VARIABLES)
#foreach (_variableName ${_variableNames})
    #message(STATUS "${_variableName}=${${_variableName}}")
#endforeach()
