#include "tool.h"

int map(int x, int in_min, int in_max, int out_min, int out_max)
    {
        if (x < in_min)
        {
            return out_min;
        }
        else if (x <= in_max && x >= in_min)
        {
            return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
        }
        else
        {
            return out_max;
        }
    }

static inline uint8_t handle_to_id(const void *base, size_t elem_size, const void *handle)
{
    return (uint8_t)(((uint32_t)handle - (uint32_t)base) / (uint32_t)elem_size);
}