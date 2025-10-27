CPMAddPackage(
        NAME fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 11.2.0)

CPMAddPackage(
        NAME spdlog
        GIT_REPOSITORY https://github.com/gabime/spdlog.git
        GIT_TAG v1.16.0)


add_library(lu STATIC
        src/lu.cpp)

target_include_directories(lu PUBLIC
        include
        ${fmt_SOURCE_DIR}/include
)