cmake_minimum_required(VERSION 3.12)
project(Chatbot)
set(CMAKE_GENERATOR "Visual Studio 17 2022")

set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES
    main.cpp
    voice.cpp
    learner.cpp
)

# Add your header files here
set(HEADERS
    voice.h
    learner.h
)

# Add executable target
add_executable(Chatbot ${SOURCES})
