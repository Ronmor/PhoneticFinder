/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Please write your names here>
 * 
 * Date: 2020-02
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

TEST_CASE("Dond vorri be haffy") {
    string text = "Dond vorri be haffy";
    CHECK(find(text, "happy") == string("haffy"));
    CHECK(find(text, "dont") == string("Dond"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "vorri") == string("vorri"));
    CHECK(find(text, "Dond") == string("Dond"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "be") == string("be"));
    CHECK(find(text, "haffy") == string("haffy"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, " "));
    CHECK_THROWS(find(text, ""));
}

TEST_CASE("The real line is = we will we will rock you") {
    string text = "Ve vyll ve vyll rukk iuo";
    CHECK(find(text, "We") == string("Ve"));
    CHECK(find(text, "will") == string("vyll"));
    CHECK(find(text, "rock") == string("rukk"));
    CHECK(find(text, "rukk") == string("rukk"));
    CHECK(find(text, "vyll") == string("vyll"));
    CHECK(find(text, "you") == string("iuo"));
    CHECK(find(text, "ve") == string("ve"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, " "));
    CHECK_THROWS(find(text, ""));
    
}

TEST_CASE("The real line is = we are the champions my friend"){
    string text = "Ve are dhe kamfyunz mi brient";
    CHECK(find(text, "We") == string("Ve"));
    CHECK(find(text, "are") == string("are"));
    CHECK(find(text, "champions") == string("khamfyunz"));
    CHECK(find(text, "khampions") == string("khamfyunz"));
    CHECK(find(text, "chamfyons") == string("khamfyunz"));
    CHECK(find(text, "championz") == string("khamfyunz"));
    CHECK(find(text, "the") == string("dhe"));
    CHECK_THROWS(find(text, "to"));
    CHECK_THROWS(find(text, "yes"));
    CHECK_THROWS(find(text, "no"));
    CHECK_THROWS(find(text, "go"));
    CHECK_THROWS(find(text, "out"));
    CHECK_THROWS(find(text, "in"));
    CHECK_THROWS(find(text, "left"));
    CHECK_THROWS(find(text, "zeus"));
    CHECK_THROWS(find(text, "alex"));
    CHECK_THROWS(find(text, "ron"));
    CHECK_THROWS(find(text, " "));
    CHECK_THROWS(find(text, ""));
    CHECK_THROWS(find(text, ", , , , ,"));
    CHECK_THROWS(find(text, ", , , ,"));
    CHECK_THROWS(find(text, ", , , , , , , , , , , ,,"));
    CHECK_THROWS(find(text, ", , ,"));
    CHECK_THROWS(find(text, ", , ,"));
}

/* Add more test cases here */
