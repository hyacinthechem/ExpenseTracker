# Specify the minimum required version of CMake
cmake_minimum_required(VERSION 3.29)

# Set the project name
project(ExpenseTracker)

# Set the C++ standard to 17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Explicitly set the architecture for macOS (Apple Silicon - arm64)
set(CMAKE_OSX_ARCHITECTURES "arm64" CACHE STRING "Build architecture")

# Specify the Qt CMake prefix path if installed in a custom location
# Adjust this path to the actual location of your Qt6 installation
set(CMAKE_PREFIX_PATH "/Users/hyacinthechemasle/Programming/ExpenseTracker")

# Find the required Qt6 components
find_package(Qt6 REQUIRED COMPONENTS Widgets)

# Include directories (current directory in this case)
include_directories(.)

# Add the executable target with all the necessary source files
add_executable(ExpenseTracker
        Dashboard.cpp
        Dashboard.h
        Expense.cpp
        Expense.h
        User.h
        User.cpp
        main.cpp
)

# Link the Qt6 Widgets library to the executable target
target_link_libraries(ExpenseTracker Qt6::Widgets)
