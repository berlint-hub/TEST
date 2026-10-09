cmake_minimum_required(VERSION 3.21)
project(depth_range_detector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Cesta k ReShade SDK (bude stazena v GitHub Actions nebo lokalne)
set(RESHADE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/external/reshade" CACHE PATH "ReShade SDK path")

# Validace SDK
if(NOT EXISTS "${RESHADE_DIR}/include/reshade.hpp")
    message(FATAL_ERROR "ReShade SDK v6.8.0 not found at: ${RESHADE_DIR}\nClone it with: git clone --branch v6.8.0 https://github.com/crosire/reshade.git external/reshade")
endif()

# Zdrojove soubory
add_library(depth_range_detector SHARED
    src/depth_range_detector.cpp
)

# Kompilacni nastaveni
target_compile_definitions(depth_range_detector PRIVATE
    UNICODE
    _UNICODE
    WIN32_LEAN_AND_MEAN
    NOMINMAX
    _CRT_SECURE_NO_WARNINGS
)

target_include_directories(depth_range_detector PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
    "${RESHADE_DIR}/include"
    "${RESHADE_DIR}/deps/imgui"
)

if(MSVC)
    target_compile_options(depth_range_detector PRIVATE
        /W4
        /MP
        /Zc:__cplusplus
        /permissive-
    )
endif()

# Vystupni soubor
set_target_properties(depth_range_detector PROPERTIES
    PREFIX ""
    OUTPUT_NAME "depth_range_detector"
    SUFFIX ".addon64"
)
