project(tests)
add_executable(glmc_tests main.c)
target_link_libraries(glmc_tests Unity glmc)
add_test(main_test glmc_tests)