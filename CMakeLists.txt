# Минимальная версия CMake
cmake_minimum_required(VERSION 3.5) 

# Название проекта 
project(Labs)

# Создаем папку build
file(MAKE_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# Находим все директории в текущем каталоге
file(GLOB children RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} */)

# Фильтруем - оставляем только директории lab*
set(lab_list "") 
foreach(child ${children})
  if(child MATCHES "lab*")
    list(APPEND lab_list ${child})
  endif()
endforeach()

# Добавляем найденные проекты
foreach(lab ${lab_list})
  add_subdirectory(${lab})
endforeach()

# Копируем исполняемые
foreach(lab ${lab_list})
  file(COPY ${lab}/bin/ 
    DESTINATION ${CMAKE_BINARY_DIR}/${lab}/bin) 
endforeach()
