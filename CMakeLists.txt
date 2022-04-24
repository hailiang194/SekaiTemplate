cmake_minimum_required(VERSION 3.0)
get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId})

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
add_subdirectory(SekaiEngine)
add_subdirectory(src/scences)

# if ( MSVC )
#     file(COPY assets/ DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Debug)
#     file(COPY assets/ DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/Release)
# else()
#     file(COPY assets/ DESTINATION ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
# endif()

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PUBLIC game_scences)
target_link_libraries(${PROJECT_NAME} PUBLIC SekaiEngine)

target_include_directories(game_scences PUBLIC "${SekaiEngine_BINARY_DIR}/include")
target_include_directories(${PROJECT_NAME} PUBLIC "${SekaiEngine_BINARY_DIR}/include")

include(SekaiEngine/cmake/web.cmake)
include(SekaiEngine/cmake/apple.cmake)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
        "${PROJECT_SOURCE_DIR}/assets"
$<TARGET_FILE_DIR:${PROJECT_NAME}>)