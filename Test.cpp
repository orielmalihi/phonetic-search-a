/*
 * Test.cpp
 *
 *  Created on: 23 Mar 2020
 *      Author: oriel
 */
#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

/* Add more test cases here */

TEST_CASE("Test replacement of p and b and and replacement of lower-case and upper-case") {
    string text = "xxx happy yyy";
    CHECK(find(text, "haPby") == string("happy"));
    CHECK(find(text, "habPY") == string("happy"));
    CHECK(find(text, "hapBy") == string("happy"));
    CHECK(find(text, "haBBy") == string("happy"));
    CHECK(find(text, "HaPBY") == string("happy"));
    CHECK(find(text, "HabpY") == string("happy"));
    CHECK(find(text, "habbY") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of k and c and q and and replacement of lower-case and upper-case") {
    string text = "LukE I am yOUR faTher";
    CHECK(find(text, "luQe") == string("LukE"));
    CHECK(find(text, "Luce") == string("LukE"));
    CHECK(find(text, "lucE") == string("LukE"));
    CHECK(find(text, "LuqE") == string("LukE"));
    CHECK(find(text, "Luce") == string("LukE"));
    CHECK(find(text, "luce") == string("LukE"));
    CHECK(find(text, "LUKE") == string("LukE"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of v and w and replacement of lower-case and upper-case") {
    string text = "with great power comes great responsbility";
    CHECK(find(text, "vith") == string("with"));
    CHECK(find(text, "vitH") == string("with"));
    CHECK(find(text, "With") == string("with"));
    CHECK(find(text, "pover") == string("power"));
    CHECK(find(text, "PoVeR") == string("power"));
    CHECK(find(text, "POWER") == string("power"));
    CHECK(find(text, "VITH") == string("with"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of g and j and replacement of lower-case and upper-case") {
    string text = "i have just fonud a solution for a problem i had in GeeksforGeeks website";
    CHECK(find(text, "gust") == string("just"));
    CHECK(find(text, "Gust") == string("just"));
    CHECK(find(text, "JUST") == string("just"));
    CHECK(find(text, "Geeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GeeksforJeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GeeksforJEEKS") == string("GeeksforGeeks"));
    CHECK(find(text, "geeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "jeeksforjeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "geeksforJeeks") == string("GeeksforGeeks"));
    CHECK(find(text, "GEEksforgEEKS") == string("GeeksforGeeks"));
    CHECK(find(text, "Jeeksforgeeks") == string("GeeksforGeeks"));
    /* Add more checks here */
}








