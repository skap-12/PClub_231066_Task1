# Editorial for the problen Naughty Johnny and his Mistake

As it can be seen in the problem that the number that is in input, can be converted into binary if we use base as $3$ instead of $2$.
So, act upon it and get the closest possible power of $3$, smaller than the integer.
now subtract this from integer and repeat the process to get the closest power for next one and update the bits as on or off
if a bit is already on, use the nearest off bit smaller than the current bit.
when the n is either $0$ or the smallest bit is on, we can get the remainder and subtract it to get the nearest number.

For the index, we can ignore the highest bit and then calculate the decimal number taking base as $2$ only (think!)
