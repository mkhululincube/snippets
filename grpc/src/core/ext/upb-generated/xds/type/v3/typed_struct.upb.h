/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/type/v3/typed_struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPB_H_
#define XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct xds_type_v3_TypedStruct;
typedef struct xds_type_v3_TypedStruct xds_type_v3_TypedStruct;
extern const upb_msglayout xds_type_v3_TypedStruct_msginit;
struct google_protobuf_Struct;
extern const upb_msglayout google_protobuf_Struct_msginit;


/* xds.type.v3.TypedStruct */

UPB_INLINE xds_type_v3_TypedStruct *xds_type_v3_TypedStruct_new(upb_arena *arena) {
  return (xds_type_v3_TypedStruct *)_upb_msg_new(&xds_type_v3_TypedStruct_msginit, arena);
}
UPB_INLINE xds_type_v3_TypedStruct *xds_type_v3_TypedStruct_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  xds_type_v3_TypedStruct *ret = xds_type_v3_TypedStruct_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &xds_type_v3_TypedStruct_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE xds_type_v3_TypedStruct *xds_type_v3_TypedStruct_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  xds_type_v3_TypedStruct *ret = xds_type_v3_TypedStruct_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &xds_type_v3_TypedStruct_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *xds_type_v3_TypedStruct_serialize(const xds_type_v3_TypedStruct *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &xds_type_v3_TypedStruct_msginit, arena, len);
}

UPB_INLINE upb_strview xds_type_v3_TypedStruct_type_url(const xds_type_v3_TypedStruct *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE bool xds_type_v3_TypedStruct_has_value(const xds_type_v3_TypedStruct *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_Struct* xds_type_v3_TypedStruct_value(const xds_type_v3_TypedStruct *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), const struct google_protobuf_Struct*); }

UPB_INLINE void xds_type_v3_TypedStruct_set_type_url(xds_type_v3_TypedStruct *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void xds_type_v3_TypedStruct_set_value(xds_type_v3_TypedStruct *msg, struct google_protobuf_Struct* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), struct google_protobuf_Struct*) = value;
}
UPB_INLINE struct google_protobuf_Struct* xds_type_v3_TypedStruct_mutable_value(xds_type_v3_TypedStruct *msg, upb_arena *arena) {
  struct google_protobuf_Struct* sub = (struct google_protobuf_Struct*)xds_type_v3_TypedStruct_value(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Struct*)_upb_msg_new(&google_protobuf_Struct_msginit, arena);
    if (!sub) return NULL;
    xds_type_v3_TypedStruct_set_value(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_TYPE_V3_TYPED_STRUCT_PROTO_UPB_H_ */
