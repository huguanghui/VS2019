set (TARGET_PROG live01)
set (TARGET_PROG_LIST main.cpp BasicEnv.cpp Env.cpp ClientConnect.cpp)

add_executable(${TARGET_PROG} ${TARGET_PROG_LIST})