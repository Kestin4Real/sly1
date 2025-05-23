/**
 * @file memory.h
 */
#ifndef MEMORY_H
#define MEMORY_H

#include "common.h"

/**
 * @brief Copies a block of memory from one location to another.
 *
 * @param pvDst Pointer to the destination memory location.
 * @param pvSrc Pointer to the source memory location.
 * @param cb Number of bytes to copy.
 */
void CopyAb(void *pvDst, void *pvSrc, uint cb);

#endif // MEMORY_H
