find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Network CONFIG REQUIRED)

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

target_link_libraries(messagingserver stdc++ Qt5::Core Qt5::Network messaginglib)

add_dependencies(messaging messagingserver)
