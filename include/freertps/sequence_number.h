#ifndef FREERTPS_SEQUENCE_NUMBER_H
#define FREERTPS_SEQUENCE_NUMBER_H

#include <stdint.h>

typedef struct fr_sequence_number
{
  int32_t high;
  uint32_t low;
} fr_sequence_number_t;

void fr_sequence_number_increment(struct fr_sequence_number *seq_num);

typedef struct fr_sequence_number_set
{
  struct fr_sequence_number bitmap_base;
  uint32_t num_bits;
  uint32_t bitmap[];
} fr_sequence_number_set_t;

typedef struct fr_sequence_number_set_32bits
{
  struct fr_sequence_number bitmap_base;
  uint32_t num_bits;
  uint32_t bitmap;
} fr_sequence_number_set_32bits_t;

extern const fr_sequence_number_t g_fr_sequence_number_unknown;

#endif
