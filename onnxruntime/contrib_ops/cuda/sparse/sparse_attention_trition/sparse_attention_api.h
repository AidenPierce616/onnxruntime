#include <cuda.h>
#include "contrib_ops/cuda/sparse/sparse_attention_trition_cubin/sparse_attention_common.h"

using onnxruntime::Status;

namespace onnxruntime {
namespace contrib {
namespace cuda {

bool is_supported_sparse_attention(const cudaDeviceProp& dprops);
bool is_supported_sparse_attention(int head_size, int sparse_block_size);

Status run_sparse_attention_fp16(SparseAttentionParams& params);
void load_sparse_attention_fp16();
Status unload_sparse_attention_fp16();

}  // namespace cuda
}  // namespace contrib
}  // namespace onnxruntime
