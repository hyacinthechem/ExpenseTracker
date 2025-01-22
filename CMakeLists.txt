cmake_minimum_required(VERSION 3.29)

# Set the project name
project(ExpenseTracker)

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)

# Optionally, set Qt's CMake prefix path if Qt is installed in a non-default location.
# If Qt is installed in a standard location, you can skip this line.
# Replace with the correct path to your Qt6 installation if necessary

set(CMAKE_PREFIX_PATH " /Users/hyacinthechemasle/Programming/ExpenseTracker")

# Find the Qt6 Widgets package
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Include directories
include_directories(.)

# Add the executable, listing all necessary source files
add_executable(ExpenseTracker
        Dashboard.cpp
        Dashboard.h
        Expense.cpp
        Expense.h
        User.h
        User.cpp
        main.cpp)

# Link the necessary Qt libraries (Widgets in this case)
target_link_libraries(ExpenseTracker Qt6::Widgets)
