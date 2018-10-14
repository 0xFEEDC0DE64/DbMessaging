set(HEADERS
)

set(SOURCES
    main.cpp
)

add_executable(messagingclient ${HEADERS} ${SOURCES})

target_link_libraries(messagingclient Qt5::Core Qt5::Network messaginglib)

add_dependencies(messaging messagingclient)
