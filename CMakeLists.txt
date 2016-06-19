cmake_minimum_required(VERSION 2.8)
add_executable (test-fisher-exact test-fisher-exact.cc)
add_library(kfunc kfunc.c)
target_link_libraries (test-fisher-exact kfunc)
