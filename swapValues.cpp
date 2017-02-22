/*
 * Copyright (C) 2017 Brik Vadim - All Rights Reserved
 * https://github.com/BrikVadim/swapValues
 */

template <typename T> inline void swapValues(T & a, T & b);

template <typename T>
inline void swapValues(T & a, T & b) {
	a += (b - a) << 1;
	b -= (a - b);
	a -= (a - b) >> 1;
}
