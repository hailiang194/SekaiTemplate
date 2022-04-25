set(game_scences_public_headers
    entry_scence.h
)

set(game_scences_sources
    entry_scence.cpp
)

add_library(game_scences OBJECT ${game_scences_public_headers} ${game_scences_sources})
target_include_directories(game_scences PUBLIC "${SekaiEngine_BINARY_DIR}/include")
target_link_libraries(game_scences PUBLIC SekaiEngine)