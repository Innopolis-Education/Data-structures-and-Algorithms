// Copyright 2022 Zener

#ifndef CODES_DATA_STRUCTURES_LIST_LISTINTERFACE_H_
#define CODES_DATA_STRUCTURES_LIST_LISTINTERFACE_H_

template<typename T>
class ListInterface {
 public:
    /// Return size of the list
    /// \return the size of the list
    /// \time_complexity O(1) for all
    virtual int size() = 0;

    /// return is the list is empty or not
    /// \return  true if the list is empty, otherwise false
    /// \time_complexity O(1) for all
    virtual bool isEmpty() = 0;

    /// return the value from the list
    /// \param i index of the element which has to be shown
    /// \return value of the got element
    /// \time_complexity O(1) for all
    virtual T get(int i) = 0;

    /// set new value instead of the old one
    /// \param i index of the element the list has to store
    /// \param t the value of the element the list has to store
    /// \return the old element, which was stored in the `i` index before
    /// \time_complexity O(1) for all
    virtual T set(int i, T t) = 0;

    /// add new value to any place
    /// \param i index of the element the list has to store
    /// \param t value of the element the list has to store
    /// \time_complexity best case - O(1), average case - O(n), worst case - O(n)
    virtual void add(int i, T t) = 0;

    /// remove the element from the list
    /// \param i index of the element which has to be removed
    /// \return value of the removed element
    /// \time_complexity best case - O(1), average case - O(n), worst case - O(n)
    virtual T remove(int i) = 0;
};

#endif  // CODES_DATA_STRUCTURES_LIST_LISTINTERFACE_H_
