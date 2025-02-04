/**
 * This file is part of the "libterminal" project
 *   Copyright (c) 2019-2020 Christian Parpart <christian@parpart.family>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <crispy/sort.h>

#include <catch2/catch.hpp>

#include <array>

using namespace std;

TEST_CASE("sort.six")
{
    std::array<int, 6> a = { 1, 2, 3, 6, 5, 4 };
    crispy::sort(a);
    REQUIRE(a == array { 1, 2, 3, 4, 5, 6 });
}

TEST_CASE("sort.zero")
{
    std::array<int, 0> a = {};
    crispy::sort(a);
    REQUIRE(a == array<int, 0> {});
}

TEST_CASE("sort.one")
{
    std::array<int, 1> a = { 3 };
    crispy::sort(a);
    REQUIRE(a == array { 3 });
}

TEST_CASE("sort.two")
{
    std::array<int, 2> a = { 2, 1 };
    crispy::sort(a);
    REQUIRE(a == array { 1, 2 });
}

TEST_CASE("sort.reverse")
{
    array<int, 7> a = { 6, 5, 4, 3, 2, 1, 0 };
    crispy::sort(a);
    REQUIRE(a == array { 0, 1, 2, 3, 4, 5, 6 });
}

TEST_CASE("sort.ordered")
{
    array<int, 7> a = { 0, 1, 2, 3, 4, 5, 6 };
    crispy::sort(a);
    REQUIRE(a == array { 0, 1, 2, 3, 4, 5, 6 });
}
