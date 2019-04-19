find_package(Qt5Core CONFIG REQUIRED)
find_package(Qt5Network CONFIG REQUIRED)

set(HEADERS
)

set(SOURCES
    main.cpp
)

add_executable(messagingclient ${HEADERS} ${SOURCES})

target_link_libraries(messagingclient stdc++ Qt5::Core Qt5::Network messaginglib)

add_dependencies(messaging messagingclient)
