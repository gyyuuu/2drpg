#include <iostream>

//画像ID
using ImageId = std::int32_t;

constexpr ImageId IMAGE_ID_ROCK = 0;
constexpr ImageId IMAGE_ID_EMPTY = 1;
constexpr ImageId IMAGE_ID_GOAL = 2;

//キャラクターを表現する文字列
const std::string IMAGE_STRING_CHARACTER = "@";

//マップを表現する文字列
const std::string IMAGE_STRING_LOCK = "■";
const std::string IMAGE_STRING_EMPTY= ".";
const std::string IMAGE_STRING_GOAL= "G";
