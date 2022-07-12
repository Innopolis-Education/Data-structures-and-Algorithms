#ifndef DATA_STRUCTURES_AND_ALGORITHMS_STACK_INTERFACE_H
#define DATA_STRUCTURES_AND_ALGORITHMS_STACK_INTERFACE_H

/// Interface of a stack
/// \tparam E type of value, stored in the stack
template<typename E>
class StackInterface {
    /// Shows size of the stack
    /// \return number of elements in the stack
    /// \time_complexity O(1) for all
    virtual int size() = 0;

    /// Shows if the stack is empty or not
    /// \return true if the stack is empty, otherwise false
    /// \time_complexity O(1) for all
    virtual bool isEmpty() = 0;

    /// Shows the top element in the stack
    /// \return the top element in the stack
    /// \time_complexity O(1) for all
    virtual E top() = 0;

    /// Adds new element to the stack
    /// \param element element, which has to be stored
    /// \time_complexity O(1) for all
    virtual void push(E element) = 0;

    /// Deletes and shows the top element in the stack
    /// \return the top element in the stack
    /// \time_complexity O(1) for all
    virtual E pop() = 0;
};


#endif//DATA_STRUCTURES_AND_ALGORITHMS_STACK_INTERFACE_H