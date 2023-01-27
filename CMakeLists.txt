cmake_minimum_required(VERSION 3.24)
project(pickacard)

set(CMAKE_CXX_STANDARD 23)

add_executable(pickacard main.cpp base/Base.cpp base/Base.h base/Result.cpp base/Result.h card/Red.cpp card/Red.h card/Green.cpp card/Green.h card/Blue.cpp card/Blue.h card/DarkRed.cpp card/DarkRed.h utilities/ReadWriteFile.cpp utilities/ReadWriteFile.h utilities/Play.cpp utilities/Play.h)
