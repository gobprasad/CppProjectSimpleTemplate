set(BINARY ${CMAKE_PROJECT_NAME}_tests)

file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp *.cc)

set(SOURCES ${TEST_SOURCES})

add_executable(${BINARY} ${TEST_SOURCES})

add_test(NAME ${BINARY} COMMAND ${BINARY})
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib gtest)

#target_include_directories(${BINARY} PUBLIC "/usr/local/include")
#target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME}_lib "/usr/local/lib/libgtest.a")
