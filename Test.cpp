/*
 * Test.cpp
 *
 *  Created on: 23 Mar 2020
 *      Author: oriel malihi
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

TEST_CASE("Test replacement of s and z and replacement of lower-case and upper-case") {
    string text = "Zombie movies are the best";
    CHECK(find(text, "zombie") == string("Zombie"));
    CHECK(find(text, "sombie") == string("Zombie"));
    CHECK(find(text, "SOMBie") == string("Zombie"));
    CHECK(find(text, "bezt") == string("best"));
    CHECK(find(text, "BeZt") == string("best"));
    CHECK(find(text, "BEZT") == string("best"));
    CHECK(find(text, "bEZt") == string("best"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of d and t and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "Down") == string("down"));
    CHECK(find(text, "town") == string("down"));
    CHECK(find(text, "Town") == string("down"));
    CHECK(find(text, "DOWN") == string("down"));
    CHECK(find(text, "towN") == string("down"));
    CHECK(find(text, "ToWn") == string("down"));
    CHECK(find(text, "dOWn") == string("down"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of o and u and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "Duwn") == string("down"));
    CHECK(find(text, "duwn") == string("down"));
    CHECK(find(text, "DuWn") == string("down"));
    CHECK(find(text, "duWN") == string("down"));
    CHECK(find(text, "dUwN") == string("down"));
    CHECK(find(text, "dUWn") == string("down"));
    CHECK(find(text, "DUWN") == string("down"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of i and y and replacement of lower-case and upper-case") {
    string text = "london bridge is falling down";
    CHECK(find(text, "brydge") == string("bridge"));
    CHECK(find(text, "brIdge") == string("bridge"));
    CHECK(find(text, "brYdge") == string("bridge"));
    CHECK(find(text, "BRYDGE") == string("bridge"));
    CHECK(find(text, "fallyng") == string("falling"));
    CHECK(find(text, "FallYng") == string("falling"));
    CHECK(find(text, "fallYNG") == string("falling"));
    /* Add more checks here */
}


TEST_CASE("Test replacement more than one letter in a word") {
    string text = "london bridge is falling down";
    CHECK(find(text, "frydge") == string("bridge"));
    CHECK(find(text, "FRYdje") == string("bridge"));
    CHECK(find(text, "Bridge") == string("bridge"));
    CHECK(find(text, "fridje") == string("bridge"));
    CHECK(find(text, "fridJE") == string("bridge"));
    CHECK(find(text, "FrYdge") == string("bridge"));
    CHECK(find(text, "FrIdge") == string("bridge"));
    CHECK(find(text, "prYdje") == string("bridge"));
    CHECK(find(text, "PRYDJE") == string("bridge"));
    CHECK(find(text, "fallinj") == string("falling"));
    CHECK(find(text, "FallYnG") == string("falling"));
    CHECK(find(text, "fallynj") == string("falling"));
    /* Add more checks here */
}

TEST_CASE("test if the program throws an exeption for words that are not in the text") {
    string text = "london bridge is falling down";
    CHECK_THROWS(find(text, "aridge"));
    CHECK_THROWS(find(text, "bridg"));
    CHECK_THROWS(find(text, "bridgee"));
    CHECK_THROWS(find(text, "izz"));
    CHECK_THROWS(find(text, "i"));
    CHECK_THROWS(find(text, "fall"));
    CHECK_THROWS(find(text, "fallimg"));
    CHECK_THROWS(find(text, "bridgh"));
    CHECK_THROWS(find(text, "dowe"));
    CHECK_THROWS(find(text, "dow"));
    CHECK_THROWS(find(text, "dwn"));
    CHECK_THROWS(find(text, "downe"));
    CHECK_THROWS(find(text, "own"));
    CHECK_THROWS(find(text, "sondon"));
    CHECK_THROWS(find(text, "tondon"));
    CHECK_THROWS(find(text, "londom"));
    CHECK_THROWS(find(text, "his"));
    CHECK_THROWS(find(text, "bcidge"));
    CHECK_THROWS(find(text, "down!"));
    CHECK_THROWS(find(text, "fakking"));
    CHECK_THROWS(find(text, "falking"));
    CHECK_THROWS(find(text, "falking"));
    CHECK_THROWS(find(text, "lozdon"));
    /* Add more checks here */
}











