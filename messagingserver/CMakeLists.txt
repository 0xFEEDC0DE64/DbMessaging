set(HEADERS
    client.h
    server.h
)

set(SOURCES
    client.cpp
    main.cpp
    server.cpp
)

add_executable(messagingserver ${HEADERS} ${SOURCES})

target_link_libraries(messagingserver Qt5::Core Qt5::Network messaginglib)
