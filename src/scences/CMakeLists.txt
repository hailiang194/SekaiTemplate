set(game_scences_public_headers
    entry_scence.h
)

set(game_scences_sources
    entry_scence.cpp
)

add_library(game_scences STATIC ${game_scences_public_headers} ${game_scences_sources})
target_link_libraries(game_scences PUBLIC SekaiEngine)