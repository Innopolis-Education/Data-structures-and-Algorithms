// Copyright 2022 Zener
// Created by Zener on 7/13/2022.
//

#ifndef CODES_DATA_STRUCTURES_QUEUE_QUEUE_INTERFACE_H_
#define CODES_DATA_STRUCTURES_QUEUE_QUEUE_INTERFACE_H_

/// Interface for queue
template<typename E>
class QueueInterface {
 public:
    /// Shows size of the queue
    /// \return number of elements, stored in the queue
    /// \time_complexity O(1) for all
    virtual int size() = 0;

    /// Shows if the queue is empty or not
    /// \return true if the queue is empty, otherwise false
    /// \time_complexity O(1) for all
    virtual bool isEmpty() = 0;

    /// Shows the value in the head
    /// \return the first value
    /// \time_complexity O(1) for all
    virtual E first() = 0;

    /// Add new element to the queue
    /// \param element element, which has to be stored to the queue
    /// \time_complexity O(1) for all
    virtual void enqueue(E element) = 0;

    /// Remove the first element from the queue
    /// \return removed element
    /// \time_complexity O(1) for all
    virtual E dequeue() = 0;
};


#endif  // CODES_DATA_STRUCTURES_QUEUE_QUEUE_INTERFACE_H_
