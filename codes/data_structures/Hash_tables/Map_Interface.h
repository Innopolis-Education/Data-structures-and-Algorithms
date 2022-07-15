// Copyright 2022 Zener
// Created by Zener on 7/15/2022.
//

#ifndef CODES_DATA_STRUCTURES_HASH_TABLES_MAP_INTERFACE_H_
#define CODES_DATA_STRUCTURES_HASH_TABLES_MAP_INTERFACE_H_

#include <string>

template<typename K, typename V>
class MapInterface {
    /// Shows size of the map
    /// \return number of elements, stored in the map
    /// \time_complexity O(1) for all
    virtual int size() = 0;

    /// Shows if the map is empty or not
    /// \return true if the map is empty, otherwise false
    /// \time_complexity O(1) for all
    virtual bool isEmpty() = 0;

    /// Returns value, stored by exact key
    /// \param key key, was used to store value
    /// \return value, stored by the key
    /// \time_complexity best case - O(1),
    ///                  average case - O(n),
    ///                  worst case - O(n)
    virtual V get(K key) = 0;

    /// Add new value to the map
    /// \param key the key, which would be used to directly search the value
    /// \param value the value, which must be stored
    /// \time_complexity best case - O(1),
    ///                  average case - O(1),
    ///                  worst case - O(n)
    virtual void put(K key, V value) = 0;

    /// Removes the value from the map
    /// \param key which key we have to remove
    /// \return the value, what would be deleted
    /// \time_complexity best case - O(1),
    ///                  average case - O(1)
    ///                  worst case - O(n)
    virtual V remove(K key) = 0;

    /// Returns the string with all values and keys, stored in the map
    /// \return all keys with its values from the map
    /// \time_complexity O(n) for all
    virtual std::string entrySet() = 0;

    /// Returns array of keys from the map
    /// \return array of keys, stored in the map
    /// \time_complexity O(n) for all
    virtual K *keySet() = 0;

    /// Returns array of values from the map
    /// \return array with all values, stored in the map
    /// \time_complexity O(n) for all
    virtual V *values() = 0;
};


#endif  // CODES_DATA_STRUCTURES_HASH_TABLES_MAP_INTERFACE_H_
