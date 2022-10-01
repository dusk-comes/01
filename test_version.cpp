#define CATCH_CONFIG_MAIN

#include "lib.h"

#include "catch2/catch_test_macros.hpp"

TEST_CASE("test valid version", "[version]")
{
    REQUIRE(version() > 0);
}
