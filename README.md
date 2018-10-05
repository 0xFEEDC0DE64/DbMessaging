# DbMessaging
Library to define messages, serialize them and create and apply delta messages (to update the "original" on server for example).

[![Build Status](https://travis-ci.org/0xFEEDC0DE64/DbMessaging.svg?branch=master)](https://travis-ci.org/0xFEEDC0DE64/DbMessaging) [![Codacy Badge](https://api.codacy.com/project/badge/Grade/e64a57bf5b044892afda15c9954ad448)](https://www.codacy.com/app/0xFEEDC0DE64/DbMessaging?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=0xFEEDC0DE64/DbMessaging&amp;utm_campaign=Badge_Grade)

## Building from source
This project can only be built as part of the project structure [DbSoftware](https://github.com/0xFEEDC0DE64/DbSoftware)

```Shell
git clone https://github.com/0xFEEDC0DE64/DbSoftware.git
cd DbSoftware
git submodule update --init --recursive DbMessaging
cd ..
mkdir build_DbSoftware
cd build_DbSoftware
qmake CONFIG+=ccache ../DbSoftware
make -j$(nproc) sub-DbMessaging
make sub-DbMessaging-install_subtargets
./bin/messagingserver &
./bin/messagingclient
```
