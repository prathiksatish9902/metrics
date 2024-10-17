cmake_minimum_required(VERSION 3.16)

project(metrics LANGUAGES C)

add_executable(metrics main.c)

include(GNUInstallDirs)
install(TARGETS metrics
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
