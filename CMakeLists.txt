cmake_minimum_required(VERSION 3.0)

set(PROG main)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

project(Presenter)

find_package(SFML 2.4 COMPONENTS system window graphics)

add_executable(${PROG}
    src/font_manager.cpp
    src/image_manager.cpp
    src/main.cpp
    src/main_window.cpp
    src/presenter.cpp
    src/shader_manager.cpp
    src/slide.cpp
    src/slide_component.cpp
    src/slideshow.cpp
    include/font_manager.h
    include/globals.h
    include/image_manager.h
    include/main_window.h
    include/presenter.h
    include/shader_manager.h
    include/slide.h
    include/slide_component.h
    include/slideshow.h)

target_include_directories(${PROG} PRIVATE ${CMAKE_SOURCE_DIR}/include ${SFML_INCLUDE_DIR})
target_compile_features(${PROG} PRIVATE cxx_std_14)
target_link_libraries(${PROG} ${SFML_LIBRARIES})