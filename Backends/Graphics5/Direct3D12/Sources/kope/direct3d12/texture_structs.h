#ifndef KOPE_D3D12_TEXTURE_STRUCTS_HEADER
#define KOPE_D3D12_TEXTURE_STRUCTS_HEADER

#include "d3d12mini.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct kope_d3d12_texture {
	struct ID3D12Resource *resource;
	uint32_t rtv_index;
	uint32_t dsv_index;
} kope_d3d12_texture;

#ifdef __cplusplus
}
#endif

#endif
