set(MYLIB_HEADERS
        Vector2.h
        )

#add_library(libusv ${MYLIB_HEADERS})

add_executable(myprogram main.cpp)

if (WIN32)
    set_target_properties(USV PROPERTIES COMPILE_DEFINITIONS NOMINMAX)
endif ()
