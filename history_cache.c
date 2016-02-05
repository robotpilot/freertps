#include <stdio.h>
#include "freertps/container.h"
#include "freertps/history_cache.h"
#include "freertps/mem.h"

void fr_history_cache_init(struct fr_history_cache *hc)
{
  // not sure what to use for default cache-change array block size
  hc->changes = fr_container_create(sizeof(struct fr_cache_change), 10);
}

struct fr_history_cache *fr_history_cache_create()
{
  struct fr_history_cache *hc = fr_malloc(sizeof(struct fr_history_cache));
  fr_history_cache_init(hc);
  return hc;
}

void fr_history_cache_add_change(struct fr_history_cache *hc,
    struct fr_cache_change *cc)
{
  printf("fr_history_cache_add_change(data_len=%d)\n", (int)cc->data_len);
}

