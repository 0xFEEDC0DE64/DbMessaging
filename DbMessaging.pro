TEMPLATE = subdirs

SUBDIRS += messagingclient \
           messaginglib \
           messagingserver \
           messagingtest

messagingclient.depends += messaginglib
messagingserver.depends += messaginglib
messagingtest.depends += messaginglib
