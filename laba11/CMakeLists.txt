cmake_minimum_required(VERSION 3.5)

project(laba11)
set(CMAKE_CXX_STANDARD 17)

# Создаем директории если их нет
file(MAKE_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)
file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# Путь к исходным файлам
set(SOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src) 

# Список исходных файлов
file(GLOB_RECURSE SOURCES LIST_DIRECTORIES false ${SOURCES_DIR}/*.cpp)

# Цикл по исходным файлам
foreach(source_file ${SOURCES})

    # Извлекаем оба номера  
    string(REGEX MATCH "labwork([0-9]+)_([0-9]+)" _ ${source_file})
    set(lab_number ${CMAKE_MATCH_1}) 
    set(exe_number ${CMAKE_MATCH_2})

    # Формируем имя
    set(exe_name laba${lab_number}_${exe_number}) 

    # Добавляем исполняемый
    add_executable(${exe_name} ${source_file})

    set_target_properties(${exe_name} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)

endforeach()