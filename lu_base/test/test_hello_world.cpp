#include <catch2/catch_all.hpp>
#include <lu.h>

TEST_CASE("Hello World Test", "[hello_world]") {
    LU_DEBUG("Hello, World!");
    REQUIRE(true); // Placeholder test
}