project(messagingtest)
enable_testing()

set(HEADERS
)

set(SOURCES
    tst_messagingtest.cpp
)

add_executable(messagingtest ${HEADERS} ${SOURCES})

add_test(messagingtest messagingtest)

target_link_libraries(messagingtest Qt5::Core Qt5::Test messaginglib)
