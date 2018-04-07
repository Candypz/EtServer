CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
PROJECT(EtServer)

SET(CMAKE_C_COMPILER gcc)
SET(CMAKE_CXX_COMPILER g++)
SET(CMAKE_BUILD_TYPE "Debug")
#SET(CMAKE_BUILD_TYPE "Release")
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -pthread -g -fpic -fPIC")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -D_DEBUG -O0 -ggdb")
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O2")
ADD_DEFINITIONS(-DPROTOBUF_INLINE_NOT_IN_HEADERS=0)

SET(PROJECT_ROOT_PATH "${CMAKE_SOURCE_DIR}/../")
IF (NOT XCODE)
    IF (CMAKE_BUILD_TYPE MATCHES "Release")
        SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/Release/")
        SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib/Release/")
    ELSEIF(CMAKE_BUILD_TYPE MATCHES "Debug")
        SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/Debug/")
        SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib/Debug/")
    ENDIF()
ELSE()
    SET(EXECUTABLE_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/bin/")
    SET(LIBRARY_OUTPUT_PATH "${CMAKE_SOURCE_DIR}/lib/")
ENDIF()

IF (WIN32)
    SET(VcpkgRoot ${_VCPKG_INSTALLED_DIR}/${VCPKG_TARGET_TRIPLET})
    INCLUDE_DIRECTORIES(${VcpkgRoot}/include/
                        ${PROJECT_SOURCE_DIR}
                        ${PROJECT_SOURCE_DIR}/3rdparty/wininclude)

    # On windows, Debug mode
    LINK_DIRECTORIES(${VcpkgRoot}/debug/lib ${VcpkgRoot}/debug/lib/manual-link)

    # On Windows, Release mode
    # LINK_DIRECTORIES(${VcpkgRoot}/lib ${VcpkgRoot}/lib/manual-link)

	set(CMAKE_CXX_FLAGS_DEBUG "/MDd")
ELSE()
    LINK_DIRECTORIES(${CMAKE_SOURCE_DIR}/lib/)
ENDIF()

IF (NOT WIN32)
    LINK_LIBRARIES("/usr/local/lib/libevent.a")
    LINK_LIBRARIES("/usr/local/lib/libevpp.so")
    LINK_LIBRARIES("/usr/local/lib/libprotobuf.a")
    LINK_LIBRARIES("/usr/local/lib/libglog.a")
ELSE()
    LINK_LIBRARIES(${VcpkgRoot}/debug/lib/glog.lib)
	LINK_LIBRARIES(${VcpkgRoot}/debug/lib/libprotobufd.lib)
ENDIF()

INCLUDE_DIRECTORIES(/usr/local/include/)
INCLUDE_DIRECTORIES(${PROJECT_ROOT_PATH}/)
INCLUDE_DIRECTORIES(${PROJECT_ROOT_PATH}/src)
INCLUDE_DIRECTORIES(.)

ADD_SUBDIRECTORY(src)
