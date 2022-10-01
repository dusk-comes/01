#define CATCH_CONFIG_MAIN

#include "lib.h"

#include "catch.hpp"

TEST_CASE("test valid version", "[version]")
{
    REQUIRE(version() > 0);
}
