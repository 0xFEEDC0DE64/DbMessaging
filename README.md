# DbMessaging
Library to define messages, serialize them and create and apply delta messages (to update the "original" on server for example).

# Building from source
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
./bin/databasetree
```
