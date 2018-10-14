project(DbMessaging)

add_custom_target(messaging)

add_subdirectory(messagingclient)
add_subdirectory(messaginglib)
add_subdirectory(messagingserver)
