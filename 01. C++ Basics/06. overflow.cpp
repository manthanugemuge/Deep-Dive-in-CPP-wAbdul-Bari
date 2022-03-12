/*Overflow : Say we have a char x and as we know the range of char is from -128 to
127 so we might get an error or warning upon storing 130 depending on compiler.
So from char x = 127 if we do x++ in next line since the capacity of char is only till 127 max
so it will come back to -128. Think of it as a round pattern with numbers from -128 to 127.
If you do next or increment after last number 127 or 360 degree you come back to -128 or 0th degree. 
Similarly if we are at x = -128 and we do x-- then we come back to 127.
*/

