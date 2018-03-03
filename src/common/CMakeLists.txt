INCLUDE_DIRECTORIES(
    ${CMAKE_SOURCE_DIR}/src/common
    ${CMAKE_SOURCE_DIR}/src/common/server
    ${CMAKE_SOURCE_DIR}/src/common/proto
)

FILE(GLOB_RECURSE SOURCE_COMMON *.h *.cpp *.cc)
ADD_LIBRARY(EtCommon STATIC ${SOURCE_COMMON})
