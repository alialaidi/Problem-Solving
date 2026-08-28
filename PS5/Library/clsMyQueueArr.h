#pragma once

#include <iostream>
#include "clsDynamicArray.h"

template <class DataType> class clsMyQueueArr
{

    protected :
    clsDynamicArray<DataType> _MyList;
    
    public :

    void push(DataType Item)
    {
        _MyList.InsertAtEnd(Item);
    }

    void pop()
    {
        _MyList.DeleteFirstItem();
    }

    void Print()
    {
        _MyList.PrintList();
    }

    int Size()
    {
        return _MyList.Size();
    }

    bool isEmpty()
    {
        return _MyList.IsEmpty();
    }

    DataType front()
    {
        return _MyList.GetItem(0);
    }

    DataType back()
    {
        return _MyList.GetItem(Size() - 1);
    }

    DataType GetItem(int Index)
    {
        return _MyList.GetItem(Index);
    }

    void Reverse()
    {
        _MyList.Reverse();
    }

    bool UpdateItem(int Index , int NewValue)
    {
        return _MyList.SetItem(Index, NewValue);
    }

    bool InsertAfter( int Index , DataType Value)
    {
       _MyList.InsertAfter(Index, Value);
    }

    void InsertAtBack( DataType value)
    {
        _MyList.InsertAtEnd(value);
    }

    void InsertAtFront( DataType value) 
    {
        _MyList.InsertAtBeginning(value);
    }

    void Clear()
    {
        _MyList.Clear();
    }
    
};