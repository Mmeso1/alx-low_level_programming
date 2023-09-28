#include "main.h"
/**
 * get_endianness - checks the endianness of a computer
 * Endianness is the way memory is alligned i.e the byte order
 * Little endian is when the LSB is stored at the lower memory address
 * while Big endian is when the MSB is stored at the lower memory address
 * LSB(least significant byte), MSB(most)
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte = (unsigned char *)&num;

	if (*byte == 1)
		return (1);
	return (0);
}
