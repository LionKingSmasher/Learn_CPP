/*
    2020.12.06 22:10 SUN

    AUTHOR: Shin4/TigerShin

    Review About: 'map'

    O
*/
#include <iostream> //Declare about 'iostream' header :)
#include <map> //Today I will be review about 'map' and
#include <hash_map> // 'hash_map'!!  yeah!!
#include <string> //just use 'std::string'


template<typename K, typename V>
void print_map(std::multimap<K, V>& map){
    for(const auto& k : map){
        std::cout << "name: " << k.first << " num: " << k.second << "\n";
    }
}

int main(int argc, char** argv){
/* start of map

    std::map<std::string, int> list; //our school student list:)

    // *Warning!* map's insert function is only get 'std::pair' type...
//    list.insert(std::pair<std::string, int>("신현규", 1209)); //it's me
//    list.insert(std::pair<std::string, int>("서승우", 1208)); //my friend
//    list.insert(std::pair<std::string, int>("서민교", 1207)); //my friend 2222
//    list.insert(std::pair<std::string, int>("안은총", 1210)); //my friend 333333
//    list.insert(std::pair<std::string, int>("조수학", 2318)); //oh boss!!!
    
    //different ways to use 'std::pair'
    list.insert(std::make_pair("신현규", 1209)); 
    list.insert(std::make_pair("서승우", 1208)); 
    list.insert(std::make_pair("서민교", 1207)); 
    list.insert(std::make_pair("안은총", 1210)); 
    list.insert(std::make_pair("조수학", 2318));

    /*
        pair vs make_pair

        diffrence:

        If you use 'pair', you must use template.
        But if you use 'make_pair', you mustn't use template.

    end */ 

/*  start of multimap
    std::multimap<std::string, int> list;

    list.insert(std::make_pair("홍길동", 1));
    list.insert(std::make_pair("고길동", 1)); // Sword master....
    list.insert(std::make_pair("공설청", 2));
    list.insert(std::make_pair("오리엔", 2)); 
    list.insert(std::make_pair("주먹펴고일어서", 3));

    print_map(list);

    /*
        map vs multimap

        differnce:
        'map' was not allowed duplication of atoms
        but multimap was allowed it;
     end*/
}