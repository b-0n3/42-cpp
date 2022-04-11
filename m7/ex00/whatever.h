//
// Created by Abdelouahad Ait hamd on 3/31/22.
//

#pragma once

template <typename T>
void swap(T &t , T &t2)
{
    T temp;
    temp = t;
    t = t2;
    t2 = temp;
}
template <typename T>
T min(T &t, T &t2)
{
   return (t < t2) ? t : t2;
}

template <typename T>
T max(T &t, T &t2)
{
    return (t > t2) ? t : t2;
}