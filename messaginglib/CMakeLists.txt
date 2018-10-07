set(HEADERS
    dbmsgbase.h
    dbmsgfieldbase.h
    dbmsgfield.h
    dbmsgmacros.h
    messaginglib_global.h
    messages/mymessage.h
)

set(SOURCES
    dbmsgbase.cpp
    dbmsgfieldbase.cpp
    messages/mymessage.cpp
)

add_library(messaginglib SHARED ${HEADERS} ${SOURCES})

target_compile_definitions(messaginglib PRIVATE MESSAGINGLIB_LIBRARY)

target_link_libraries(messaginglib Qt5::Core Qt5::Network)

target_include_directories(messaginglib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
