#include <iostream>
#include <vector>

#include <map>
#include <unordered_map>

struct CityRecord
{
    std::string Name;
    uint64_t Population; 
    double  Latitude,  Longitude;
};

int main()
{
    std::vector<CityRecord> cities;
    cities.emplace_back("Sydney", 5000000, 2.4, 9);
    cities.emplace_back("Melbourne", 50000000, 2.4, 9.4);
    cities.emplace_back("Brisbane", 2000000, 2.4,9);
    cities.emplace_back("Perth", 2000000, 2.4, 9);
    cities.emplace_back("Adelaide", 2000000, 2.4, 9);
    cities.emplace_back("Hobart", 2000000, 2.4,9);
    cities.emplace_back("Darwin", 2000000, 2.4,9);
    cities.emplace_back("Canberra", 2000000, 2.4,9);
    cities.emplace_back("Gold Coast", 2000000, 2.4,9);

    /*
    if we were to use a vector, we'd have to iterate  over the vector 
    to find the city with the highest population or whatever we are looking for.
    The operations are expensive regardless if we order the vector or use a BST.
    So, this is where map comes in. 
   */

    std::map<std::string, CityRecord> cityMap;

    cityMap["Sydney"] = CityRecord{"Sydney", 5000000, 2.4, 9};
    cityMap["Melbourne"] = CityRecord{"Melbourne", 50000000, 2.4, 9.4};
    cityMap["Brisbane"] = CityRecord{"Brisbane", 2000000, 2.4,9};
    cityMap["Perth"] = CityRecord{"Perth", 2000000, 2.4, 9};
    cityMap["Adelaide"] = CityRecord{"Adelaide", 2000000, 2.4, 9};
    cityMap["Hobart"] = CityRecord{"Hobart", 2000000, 2.4,9};
    cityMap["Darwin"] = CityRecord{"Darwin", 2000000, 2.4,9};
    cityMap["Canberra"] = CityRecord{"Canberra", 2000000, 2.4,9};
    cityMap["Gold Coast"] = CityRecord{"Gold Coast", 2000000, 2.4,9};

    //we are associating a particular key with that value 
    //the key here being the city name


    //so how would you retrieve information about Perth?

    CityRecord & perthData = cityMap["Perth"];

    //if you want population data now for example 
    perthData.Population;

    //its not only easier, but much faster

    //since this is a regular map, the structure now  is ordered

    //if we want to make it unordered we just set it to unordered_map
    std::unordered_map<std::string, CityRecord> cityMap;




}