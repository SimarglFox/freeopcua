# CMake generated Testfile for 
# Source directory: /home/user/projects/NewOpcUa/freeopcua
# Build directory: /home/user/projects/NewOpcUa/freeopcua
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opcuaprotocol "/home/user/projects/NewOpcUa/freeopcua/bin/test_opcuaprotocol")
add_test(opcuacore "/home/user/projects/NewOpcUa/freeopcua/bin/test_opcuacore")
add_test(opcuaserverapp "/home/user/projects/NewOpcUa/freeopcua/bin/test_opcuaserver")
subdirs(tests/gtest)
subdirs(python)
