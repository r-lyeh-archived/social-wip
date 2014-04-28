#pragma once

#include <functional>
#include <string>
#include <vector>
#include <iostream>

namespace std {
    template<typename K>
    using vector1 = std::vector< K >;
    template<typename K, typename V1>
    using vector2 = std::vector< std::tuple<K,V1> >;
    template<typename K, typename V1, typename V2 >
    using vector3 = std::vector< std::tuple<K,V1,V2> >;
    template<typename K, typename V1, typename V2, typename V3 >
    using vector4 = std::vector< std::tuple<K,V1,V2,V3> >;
    template<typename K, typename V1, typename V2, typename V3, typename V4 >
    using vector5 = std::vector< std::tuple<K,V1,V2,V3,V4> >;

    template<typename T>
    using hasher = std::hash<T>();
}

using type = unsigned;

using string      = /*component<'str' , */ std::string /*>*/;
using salt        = /*component<'salt', */ std::string /*>*/;
using item        = /*component<'item', */ std::string /*>*/;
using text        = /*component<'text', */ std::string /*>*/;
using nick        = /*component<'nick', */ std::string /*>*/;
using css         = /*component<'css' , */ std::string /*>*/;
using url         = /*component<'url' , */ std::string /*>*/;
using device      = /*component<'dev' , */ std::string /*>*/;
using code        = /*component<'code', */ std::string /*>*/;
using name        = /*component<'name', */ std::string /*>*/;
using image       = /*component<'imag', */ std::string /*>*/;
using topic       = /*component<'topi', */ std::string /*>*/;
using style       = /*component<'styl', */ std::string /*>*/;
using score       = /*component<'scor', */ std::string /*>*/;
using uuid        = /*component<'uuid', */ std::string /*>*/;
using description = /*component<'desc', */ std::string /*>*/;
using pid         = /*component<'pid' , */ unsigned /*>*/;
using hash        = /*component<'hash', */ unsigned /*>*/;
using count       = /*component<'coun', */ unsigned /*>*/;
using price       = /*component<'pric', */ unsigned /*>*/;
using time        = /*component<'time', */ unsigned long long /*>*/;
using date        = /*component<'date', */ unsigned long long /*>*/;
using timespan    = /*component<'span', */ double /*>*/;
using toggle      = /*component<'togg', */ bool /*>*/;
using offset      = /*component<'offs', */ size_t /*>*/;

using attrib = std::tuple< string, int >;
using meta = std::vector1< attrib >;

using viewer = unsigned;
using player = unsigned; //anon orcs :)
using member = std::tuple< pid, nick, image, url, meta >;

using link = std::tuple< text, image, url >;
using message = std::tuple< player, text, meta >;

using ranking = std::vector2< member, score >;
using matchmaking = std::vector2< member, score >;

using chat = std::vector1< message >;
using mail = std::vector1< message >;
using forum = std::vector2< topic, chat >;
using notification = std::vector1< message >;

using friends = std::vector1< member >;
using gallery = std::vector1< image >;

using trophy = std::tuple< description, image, score >;
using trophies = std::vector1< trophy >;

using story = std::tuple< member, text >;
using wall = std::vector1< story >;

using like = std::tuple< url, toggle >;
using likes = std::vector2< url, count >;
using suggestions = std::vector1< likes >;

using gang = std::vector1< member >;
using faction = std::vector1< gang >;

using legal = std::tuple< text, toggle >;
using rights = std::vector1< text >;

using ad = std::tuple< text, image, url >;
using ads = std::vector1< ad >;

using purchase = std::tuple< description, item, count, price, meta >;
using purchases = std::vector1< purchase >;

using credential = std::tuple< member, device, salt, timespan >;
using credentials = std::vector1< credential >;

using invite = std::tuple< uuid, salt >;
using invites = std::vector1< invite >;

using voucher = std::tuple< code, count >;
using vouchers = std::vector1< code >;

using search = std::tuple< url, offset >;
using searches = std::vector1< search >;

/*
@todo:

cups
├───round
└───round-compo
spam
wall-cache
*/
