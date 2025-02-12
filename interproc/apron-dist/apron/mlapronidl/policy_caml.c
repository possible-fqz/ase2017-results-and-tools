
/* This file is part of the APRON Library, released under LGPL license  with an exception allowing the redistribution of statically linked executables.
  Please read the COPYING file packaged in the distribution  *//* File generated from policy.idl */

#include <stddef.h>
#include <string.h>
#include <caml/mlvalues.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/fail.h>
#include <caml/callback.h>
#ifdef Custom_tag
#include <caml/custom.h>
#include <caml/bigarray.h>
#endif
#include <caml/camlidlruntime.h>


#include <limits.h>
#include "ap_manager.h"
#include "ap_policy.h"
#include "caml/callback.h"
#include "apron_caml.h"

extern void camlidl_apron_manager_funid_ml2c(value, ap_funid_t *);
#define camlidl_ml2c_manager_ap_funid_t(v,c,ctx) camlidl_apron_manager_funid_ml2c(v,c)

extern value camlidl_apron_manager_funid_c2ml(ap_funid_t *);
#define camlidl_c2ml_manager_ap_funid_t(c,ctx) camlidl_apron_manager_funid_c2ml(c)


extern void camlidl_ml2c_manager_struct_ap_funopt_t(value, struct ap_funopt_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_manager_struct_ap_funopt_t(struct ap_funopt_t *, camlidl_ctx _ctx);

extern void camlidl_apron_manager_exc_ml2c(value, ap_exc_t *);
#define camlidl_ml2c_manager_ap_exc_t(v,c,ctx) camlidl_apron_manager_exc_ml2c(v,c)

extern value camlidl_apron_manager_exc_c2ml(ap_exc_t *);
#define camlidl_c2ml_manager_ap_exc_t(c,ctx) camlidl_apron_manager_exc_c2ml(c)


extern void camlidl_ml2c_manager_struct_ap_exclog_t(value, struct ap_exclog_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_manager_struct_ap_exclog_t(struct ap_exclog_t *, camlidl_ctx _ctx);

extern void camlidl_apron_manager_ptr_ml2c(value, ap_manager_ptr *);
#define camlidl_ml2c_manager_ap_manager_ptr(v,c,ctx) camlidl_apron_manager_ptr_ml2c(v,c)

extern value camlidl_apron_manager_ptr_c2ml(ap_manager_ptr *);
#define camlidl_c2ml_manager_ap_manager_ptr(c,ctx) camlidl_apron_manager_ptr_c2ml(c)


extern void camlidl_apron_scalar_ml2c(value, ap_scalar_t *);
#define camlidl_ml2c_scalar_ap_scalar_t(v,c,ctx) camlidl_apron_scalar_ml2c(v,c)

extern value camlidl_apron_scalar_c2ml(ap_scalar_t *);
#define camlidl_c2ml_scalar_ap_scalar_t(c,ctx) camlidl_apron_scalar_c2ml(c)


extern void camlidl_ml2c_scalar_ap_scalar_ptr(value, ap_scalar_ptr *, camlidl_ctx _ctx);
extern value camlidl_c2ml_scalar_ap_scalar_ptr(ap_scalar_ptr *, camlidl_ctx _ctx);

extern void camlidl_ml2c_scalar_struct_ap_scalar_array_t(value, struct ap_scalar_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_scalar_struct_ap_scalar_array_t(struct ap_scalar_array_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_interval_struct_ap_interval_t(value, struct ap_interval_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_interval_struct_ap_interval_t(struct ap_interval_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_interval_ap_interval_ptr(value, ap_interval_ptr *, camlidl_ctx _ctx);
extern value camlidl_c2ml_interval_ap_interval_ptr(ap_interval_ptr *, camlidl_ctx _ctx);

extern void camlidl_ml2c_interval_struct_ap_interval_array_t(value, struct ap_interval_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_interval_struct_ap_interval_array_t(struct ap_interval_array_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_coeff_struct_ap_coeff_t(value, struct ap_coeff_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_coeff_struct_ap_coeff_t(struct ap_coeff_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_dim_ap_dim_t(value, ap_dim_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_dim_ap_dim_t(ap_dim_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_dim_struct_ap_dimchange_t(value, struct ap_dimchange_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_dim_struct_ap_dimchange_t(struct ap_dimchange_t *, camlidl_ctx _ctx);

extern void camlidl_apron_dimchange_ml2c(value, ap_dimchange_t *);
#define camlidl_ml2c_dim_ap_dimchange_t(v,c,ctx) camlidl_apron_dimchange_ml2c(v,c)

extern value camlidl_apron_dimchange_c2ml(ap_dimchange_t *);
#define camlidl_c2ml_dim_ap_dimchange_t(c,ctx) camlidl_apron_dimchange_c2ml(c)


extern void camlidl_ml2c_dim_struct_ap_dimchange2_t(value, struct ap_dimchange2_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_dim_struct_ap_dimchange2_t(struct ap_dimchange2_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_dim_struct_ap_dimperm_t(value, struct ap_dimperm_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_dim_struct_ap_dimperm_t(struct ap_dimperm_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_dim_struct_ap_dimension_t(value, struct ap_dimension_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_dim_struct_ap_dimension_t(struct ap_dimension_t *, camlidl_ctx _ctx);

extern void camlidl_apron_linexpr0_ptr_ml2c(value, ap_linexpr0_ptr *);
#define camlidl_ml2c_linexpr0_ap_linexpr0_ptr(v,c,ctx) camlidl_apron_linexpr0_ptr_ml2c(v,c)

extern value camlidl_apron_linexpr0_ptr_c2ml(ap_linexpr0_ptr *);
#define camlidl_c2ml_linexpr0_ap_linexpr0_ptr(c,ctx) camlidl_apron_linexpr0_ptr_c2ml(c)


extern void camlidl_apron_lincons0_ml2c(value, ap_lincons0_t *, camlidl_ctx);
#define camlidl_ml2c_lincons0_ap_lincons0_t(v,c,ctx) camlidl_apron_lincons0_ml2c(v,c,ctx)

extern value camlidl_apron_lincons0_c2ml(ap_lincons0_t *);
#define camlidl_c2ml_lincons0_ap_lincons0_t(c,ctx) camlidl_apron_lincons0_c2ml(c)


extern void camlidl_ml2c_lincons0_struct_ap_lincons0_array_t(value, struct ap_lincons0_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_lincons0_struct_ap_lincons0_array_t(struct ap_lincons0_array_t *, camlidl_ctx _ctx);

extern int camlidl_ml2c_generator0_enum_gentyp(value);
extern value camlidl_c2ml_generator0_enum_gentyp(int);

extern int camlidl_transl_table_generator0_enum_gentyp[];

extern void camlidl_ml2c_generator0_struct_ap_generator0_t(value, struct ap_generator0_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_generator0_struct_ap_generator0_t(struct ap_generator0_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_generator0_struct_ap_generator0_array_t(value, struct ap_generator0_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_generator0_struct_ap_generator0_array_t(struct ap_generator0_array_t *, camlidl_ctx _ctx);

extern void camlidl_apron_texpr0_ptr_ml2c(value, ap_texpr0_ptr *);
#define camlidl_ml2c_texpr0_ap_texpr0_ptr(v,c,ctx) camlidl_apron_texpr0_ptr_ml2c(v,c)

extern value camlidl_apron_texpr0_ptr_c2ml(ap_texpr0_ptr *);
#define camlidl_c2ml_texpr0_ap_texpr0_ptr(c,ctx) camlidl_apron_texpr0_ptr_c2ml(c)


extern void camlidl_ml2c_texpr0_struct_ap_texpr_op_t(value, ap_texpr_op_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_texpr0_struct_ap_texpr_op_t(ap_texpr_op_t *, camlidl_ctx _ctx);

extern void camlidl_apron_texpr_unop_t_ml2c(value, ap_texpr_unop_t *);
#define camlidl_ml2c_texpr0_ap_texpr_unop_t(v,c,ctx) camlidl_apron_texpr_unop_t_ml2c(v,c)

extern value camlidl_apron_texpr_unop_t_c2ml(ap_texpr_unop_t *);
#define camlidl_c2ml_texpr0_ap_texpr_unop_t(c,ctx) camlidl_apron_texpr_unop_t_c2ml(c)


extern void camlidl_apron_texpr_binop_t_ml2c(value, ap_texpr_binop_t *);
#define camlidl_ml2c_texpr0_ap_texpr_binop_t(v,c,ctx) camlidl_apron_texpr_binop_t_ml2c(v,c)

extern value camlidl_apron_texpr_binop_t_c2ml(ap_texpr_binop_t *);
#define camlidl_c2ml_texpr0_ap_texpr_binop_t(c,ctx) camlidl_apron_texpr_binop_t_c2ml(c)


extern void camlidl_ml2c_texpr0_struct_ap_texpr_rtype_t(value, ap_texpr_rtype_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_texpr0_struct_ap_texpr_rtype_t(ap_texpr_rtype_t *, camlidl_ctx _ctx);

extern void camlidl_apron_texpr_rtype_t_ml2c(value, ap_texpr_rtype_t *);
#define camlidl_ml2c_texpr0_ap_texpr_rtype_t(v,c,ctx) camlidl_apron_texpr_rtype_t_ml2c(v,c)

extern value camlidl_apron_texpr_rtype_t_c2ml(ap_texpr_rtype_t *);
#define camlidl_c2ml_texpr0_ap_texpr_rtype_t(c,ctx) camlidl_apron_texpr_rtype_t_c2ml(c)


extern void camlidl_ml2c_texpr0_struct_ap_texpr_rdir_t(value, ap_texpr_rdir_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_texpr0_struct_ap_texpr_rdir_t(ap_texpr_rdir_t *, camlidl_ctx _ctx);

extern void camlidl_apron_texpr_rdir_t_ml2c(value, ap_texpr_rdir_t *);
#define camlidl_ml2c_texpr0_ap_texpr_rdir_t(v,c,ctx) camlidl_apron_texpr_rdir_t_ml2c(v,c)

extern value camlidl_apron_texpr_rdir_t_c2ml(ap_texpr_rdir_t *);
#define camlidl_c2ml_texpr0_ap_texpr_rdir_t(c,ctx) camlidl_apron_texpr_rdir_t_c2ml(c)


extern void camlidl_apron_tcons0_ml2c(value, ap_tcons0_t *, camlidl_ctx);
#define camlidl_ml2c_tcons0_ap_tcons0_t(v,c,ctx) camlidl_apron_tcons0_ml2c(v,c,ctx)

extern value camlidl_apron_tcons0_c2ml(ap_tcons0_t *);
#define camlidl_c2ml_tcons0_ap_tcons0_t(c,ctx) camlidl_apron_tcons0_c2ml(c)


extern void camlidl_ml2c_tcons0_struct_ap_tcons0_array_t(value, struct ap_tcons0_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_tcons0_struct_ap_tcons0_array_t(struct ap_tcons0_array_t *, camlidl_ctx _ctx);

extern void camlidl_apron_abstract0_ptr_ml2c(value, ap_abstract0_ptr *);
#define camlidl_ml2c_abstract0_ap_abstract0_ptr(v,c,ctx) camlidl_apron_abstract0_ptr_ml2c(v,c)

extern value camlidl_apron_abstract0_ptr_c2ml(ap_abstract0_ptr *);
#define camlidl_c2ml_abstract0_ap_abstract0_ptr(c,ctx) camlidl_apron_abstract0_ptr_c2ml(c)


extern void camlidl_apron_var_ptr_ml2c(value, ap_var_t *);
#define camlidl_ml2c_var_ap_var_t(v,c,ctx) camlidl_apron_var_ptr_ml2c(v,c)

extern value camlidl_apron_var_ptr_c2ml(ap_var_t *);
#define camlidl_c2ml_var_ap_var_t(c,ctx) camlidl_apron_var_ptr_c2ml(c)


extern int camlidl_ml2c_environment_enum_typvar(value);
extern value camlidl_c2ml_environment_enum_typvar(int);

extern int camlidl_transl_table_environment_enum_typvar[];

extern void camlidl_apron_environment_ptr_ml2c(value, ap_environment_ptr *);
#define camlidl_ml2c_environment_ap_environment_ptr(v,c,ctx) camlidl_apron_environment_ptr_ml2c(v,c)

extern value camlidl_apron_environment_ptr_c2ml(ap_environment_ptr *);
#define camlidl_c2ml_environment_ap_environment_ptr(c,ctx) camlidl_apron_environment_ptr_c2ml(c)


extern void camlidl_ml2c_linexpr1_struct_ap_linexpr1_t(value, struct ap_linexpr1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_linexpr1_struct_ap_linexpr1_t(struct ap_linexpr1_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_lincons1_struct_ap_lincons1_t(value, struct ap_lincons1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_lincons1_struct_ap_lincons1_t(struct ap_lincons1_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(value, struct ap_lincons1_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_lincons1_struct_ap_lincons1_array_t(struct ap_lincons1_array_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_generator1_struct_ap_generator1_t(value, struct ap_generator1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_generator1_struct_ap_generator1_t(struct ap_generator1_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_generator1_struct_ap_generator1_array_t(value, struct ap_generator1_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_generator1_struct_ap_generator1_array_t(struct ap_generator1_array_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_texpr1_struct_ap_texpr1_t(value, struct ap_texpr1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_texpr1_struct_ap_texpr1_t(struct ap_texpr1_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_tcons1_struct_ap_tcons1_t(value, struct ap_tcons1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_tcons1_struct_ap_tcons1_t(struct ap_tcons1_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_tcons1_struct_ap_tcons1_array_t(value, struct ap_tcons1_array_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_tcons1_struct_ap_tcons1_array_t(struct ap_tcons1_array_t *, camlidl_ctx _ctx);

extern void camlidl_ml2c_abstract1_struct_ap_abstract1_t(value, struct ap_abstract1_t *, camlidl_ctx _ctx);
extern value camlidl_c2ml_abstract1_struct_ap_abstract1_t(struct ap_abstract1_t *, camlidl_ctx _ctx);

#define camlidl_ml2c_policy_ap_policy_manager_ptr(v,c,ctx) camlidl_apron_policy_manager_ptr_ml2c(v,c)

#define camlidl_c2ml_policy_ap_policy_manager_ptr(c,ctx) camlidl_apron_policy_manager_ptr_c2ml(c)

#define camlidl_ml2c_policy_ap_policy_ptr(v,c,ctx) camlidl_apron_policy_ptr_ml2c(v,c)

#define camlidl_c2ml_policy_ap_policy_ptr(c,ctx) camlidl_apron_policy_ptr_c2ml(c)

#define camlidl_ml2c_policy_ap_policy_optr(v,c,ctx) camlidl_apron_policy_optr_ml2c(v,c)

#define camlidl_c2ml_policy_ap_policy_optr(c,ctx) camlidl_apron_policy_optr_c2ml(c)

value camlidl_policy_ap_policy_manager_get_manager(
	value _v_pman)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_manager_ptr _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  /* begin user-supplied calling sequence */
_res  = ap_manager_copy(pman->man);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_manager_ap_manager_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_policy_ap_policy_manager(
	value _v_policy)
{
  ap_policy_ptr policy; /*in*/
  ap_policy_manager_ptr _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_policy_manager_copy(policy->pman);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_policy_ap_policy_manager_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_policy_ap_policy_copy(
	value _v_man,
	value _v_policy)
{
  ap_policy_manager_ptr man; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_policy_ptr _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_man, &man, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  _res = ap_policy_copy(man, policy);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_policy_ap_policy_fdump(
	value _v_man,
	value _v_policy)
{
  ap_policy_manager_ptr man; /*in*/
  ap_policy_ptr policy; /*in*/
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_man, &man, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  /* begin user-supplied calling sequence */
ap_policy_fprint(stdout,man, policy); fflush(stdout);
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  return Val_unit;
}

value camlidl_policy_ap_policy_to_string(
	value _v_man,
	value _v_policy)
{
  ap_policy_manager_ptr man; /*in*/
  ap_policy_ptr policy; /*in*/
  char *_res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_man, &man, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_policy_sprint(man,policy);
  /* end user-supplied calling sequence */
  _vres = copy_string(_res);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
free(_res);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_policy_dimension(
	value _v_man,
	value _v_policy)
{
  ap_policy_manager_ptr man; /*in*/
  ap_policy_ptr policy; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_man, &man, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  /* begin user-supplied calling sequence */
_res = (int)ap_policy_dimension(man,policy);
  /* end user-supplied calling sequence */
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_policy_ap_policy_equal(
	value _v_man,
	value _v_policy1,
	value _v_policy2)
{
  ap_policy_manager_ptr man; /*in*/
  ap_policy_ptr policy1; /*in*/
  ap_policy_ptr policy2; /*in*/
  int _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_man, &man, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy1, &policy1, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy2, &policy2, _ctx);
  _res = ap_policy_equal(man, policy1, policy2);
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_apply(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a1; /*in*/
  ap_abstract0_ptr a2; /*in*/
  ap_abstract0_ptr _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a1, &a1, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a2, &a2, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract0_policy_meet_apply(pman,policy,false,a1,a2);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract0_ap_abstract0_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_array)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr *array; /*in*/
  unsigned int size; /*in*/
  ap_abstract0_ptr _res;
  mlsize_t _c1;
  mlsize_t _c2;
  value _v3;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  _c1 = Wosize_val(_v_array);
  array = camlidl_malloc(_c1 * sizeof(ap_abstract0_ptr ), _ctx);
  for (_c2 = 0; _c2 < _c1; _c2++) {
    _v3 = Field(_v_array, _c2);
    camlidl_ml2c_abstract0_ap_abstract0_ptr(_v3, &array[_c2], _ctx);
  }
  size = _c1;
  _res = ap_abstract0_policy_meet_array_apply(pman, policy, array, size);
  _vres = camlidl_c2ml_abstract0_ap_abstract0_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_lincons_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_lincons0_array_t *v; /*in*/
  ap_abstract0_ptr _res;
  struct ap_lincons0_array_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_lincons0_struct_ap_lincons0_array_t(_v_v, &_c1, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract0_policy_meet_lincons_array_apply(pman,policy,false,a,v);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract0_ap_abstract0_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_tcons_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_tcons0_array_t *v; /*in*/
  ap_abstract0_ptr _res;
  struct ap_tcons0_array_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_tcons0_struct_ap_tcons0_array_t(_v_v, &_c1, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract0_policy_meet_tcons_array_apply(pman,policy,false,a,v);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract0_ap_abstract0_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a1; /*in*/
  ap_abstract0_ptr a2; /*in*/
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a1, &a1, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a2, &a2, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract0_t* res = ap_abstract0_policy_meet_apply(pman,policy,true,a1,a2);
*((ap_abstract0_ptr *) Data_custom_val(_v_a1)) = res;
               }
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract0_policy_meet_lincons_array_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_lincons0_array_t *v; /*in*/
  struct ap_lincons0_array_t _c1;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_lincons0_struct_ap_lincons0_array_t(_v_v, &_c1, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract0_t* res = ap_abstract0_policy_meet_lincons_array_apply(pman,policy,true,a,v);
*((ap_abstract0_ptr *) Data_custom_val(_v_a)) = res;
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract0_policy_meet_tcons_array_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_tcons0_array_t *v; /*in*/
  struct ap_tcons0_array_t _c1;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_tcons0_struct_ap_tcons0_array_t(_v_v, &_c1, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract0_t* res = ap_abstract0_policy_meet_tcons_array_apply(pman,policy,true,a,v);
 *((ap_abstract0_ptr *) Data_custom_val(_v_a)) = res;
                }
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract0_policy_meet_improve(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  ap_abstract0_ptr a1; /*in*/
  ap_abstract0_ptr a2; /*in*/
  ap_policy_ptr _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a1, &a1, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a2, &a2, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract0_policy_meet_improve(pman,policy,a1,a2);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_array)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  ap_abstract0_ptr *array; /*in*/
  unsigned int size; /*in*/
  ap_policy_ptr _res;
  mlsize_t _c1;
  mlsize_t _c2;
  value _v3;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  _c1 = Wosize_val(_v_array);
  array = camlidl_malloc(_c1 * sizeof(ap_abstract0_ptr ), _ctx);
  for (_c2 = 0; _c2 < _c1; _c2++) {
    _v3 = Field(_v_array, _c2);
    camlidl_ml2c_abstract0_ap_abstract0_ptr(_v3, &array[_c2], _ctx);
  }
  size = _c1;
  _res = ap_abstract0_policy_meet_array_improve(pman, policy, array, size);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_lincons_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_lincons0_array_t *v; /*in*/
  ap_policy_ptr _res;
  struct ap_lincons0_array_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_lincons0_struct_ap_lincons0_array_t(_v_v, &_c1, _ctx);
  _res = ap_abstract0_policy_meet_lincons_array_improve(pman, policy, a, v);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract0_policy_meet_tcons_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  ap_abstract0_ptr a; /*in*/
  struct ap_tcons0_array_t *v; /*in*/
  ap_policy_ptr _res;
  struct ap_tcons0_array_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  camlidl_ml2c_abstract0_ap_abstract0_ptr(_v_a, &a, _ctx);
  v = &_c1;
  camlidl_ml2c_tcons0_struct_ap_tcons0_array_t(_v_v, &_c1, _ctx);
  _res = ap_abstract0_policy_meet_tcons_array_improve(pman, policy, a, v);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_apply(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a1; /*in*/
  struct ap_abstract1_t *a2; /*in*/
  struct ap_abstract1_t _res;
  struct ap_abstract1_t _c1;
  struct ap_abstract1_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a1 = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a1, &_c1, _ctx);
  a2 = &_c2;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a2, &_c2, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract1_policy_meet_apply(pman,policy,false,a1,a2);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract1_struct_ap_abstract1_t(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_array)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *array; /*in*/
  unsigned int size; /*in*/
  struct ap_abstract1_t _res;
  mlsize_t _c1;
  mlsize_t _c2;
  value _v3;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  _c1 = Wosize_val(_v_array);
  array = camlidl_malloc(_c1 * sizeof(struct ap_abstract1_t ), _ctx);
  for (_c2 = 0; _c2 < _c1; _c2++) {
    _v3 = Field(_v_array, _c2);
    camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v3, &array[_c2], _ctx);
  }
  size = _c1;
  _res = ap_abstract1_policy_meet_array_apply(pman, policy, array, size);
  _vres = camlidl_c2ml_abstract1_struct_ap_abstract1_t(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_lincons_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_lincons1_array_t *v; /*in*/
  struct ap_abstract1_t _res;
  struct ap_abstract1_t _c1;
  struct ap_lincons1_array_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(_v_v, &_c2, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract1_policy_meet_lincons_array_apply(pman,policy,false,a,v);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract1_struct_ap_abstract1_t(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_tcons_array_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_tcons1_array_t *v; /*in*/
  struct ap_abstract1_t _res;
  struct ap_abstract1_t _c1;
  struct ap_tcons1_array_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_tcons1_struct_ap_tcons1_array_t(_v_v, &_c2, _ctx);
  /* begin user-supplied calling sequence */
_res = ap_abstract1_policy_meet_tcons_array_apply(pman,policy,false,a,v);
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_abstract1_struct_ap_abstract1_t(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a1; /*in*/
  struct ap_abstract1_t *a2; /*in*/
  struct ap_abstract1_t _c1;
  struct ap_abstract1_t _c2;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a1 = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a1, &_c1, _ctx);
  a2 = &_c2;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a2, &_c2, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract1_t res = ap_abstract1_policy_meet_apply(pman,policy,true,a1,a2);
value v = Field(_v_a1,0);
*((ap_abstract0_ptr *) Data_custom_val(v)) = res.abstract0;
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract1_policy_meet_lincons_array_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_lincons1_array_t *v; /*in*/
  struct ap_abstract1_t _c1;
  struct ap_lincons1_array_t _c2;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(_v_v, &_c2, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract1_t res = ap_abstract1_policy_meet_lincons_array_apply(pman,policy,true,a,v);
value v = Field(_v_a,0);
*((ap_abstract0_ptr *) Data_custom_val(v)) = res.abstract0;
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract1_policy_meet_tcons_array_with_apply(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_ptr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_tcons1_array_t *v; /*in*/
  struct ap_abstract1_t _c1;
  struct ap_tcons1_array_t _c2;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_ptr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_tcons1_struct_ap_tcons1_array_t(_v_v, &_c2, _ctx);
  /* begin user-supplied calling sequence */
{
ap_abstract1_t res = ap_abstract1_policy_meet_tcons_array_apply(pman,policy,true,a,v);
value v = Field(_v_a,0);
*((ap_abstract0_ptr *) Data_custom_val(v)) = res.abstract0;
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return Val_unit;
}

value camlidl_policy_ap_abstract1_policy_meet_improve(
	value _v_pman,
	value _v_policy,
	value _v_a1,
	value _v_a2)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  struct ap_abstract1_t *a1; /*in*/
  struct ap_abstract1_t *a2; /*in*/
  ap_policy_ptr _res;
  struct ap_abstract1_t _c1;
  struct ap_abstract1_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  a1 = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a1, &_c1, _ctx);
  a2 = &_c2;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a2, &_c2, _ctx);
  _res = ap_abstract1_policy_meet_improve(pman, policy, a1, a2);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_array)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  struct ap_abstract1_t *array; /*in*/
  unsigned int size; /*in*/
  ap_policy_ptr _res;
  mlsize_t _c1;
  mlsize_t _c2;
  value _v3;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  _c1 = Wosize_val(_v_array);
  array = camlidl_malloc(_c1 * sizeof(struct ap_abstract1_t ), _ctx);
  for (_c2 = 0; _c2 < _c1; _c2++) {
    _v3 = Field(_v_array, _c2);
    camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v3, &array[_c2], _ctx);
  }
  size = _c1;
  _res = ap_abstract1_policy_meet_array_improve(pman, policy, array, size);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_lincons_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_lincons1_array_t *v; /*in*/
  ap_policy_ptr _res;
  struct ap_abstract1_t _c1;
  struct ap_lincons1_array_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(_v_v, &_c2, _ctx);
  _res = ap_abstract1_policy_meet_lincons_array_improve(pman, policy, a, v);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_policy_ap_abstract1_policy_meet_tcons_array_improve(
	value _v_pman,
	value _v_policy,
	value _v_a,
	value _v_v)
{
  ap_policy_manager_ptr pman; /*in*/
  ap_policy_optr policy; /*in*/
  struct ap_abstract1_t *a; /*in*/
  struct ap_tcons1_array_t *v; /*in*/
  ap_policy_ptr _res;
  struct ap_abstract1_t _c1;
  struct ap_tcons1_array_t _c2;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_policy_ap_policy_manager_ptr(_v_pman, &pman, _ctx);
  camlidl_ml2c_policy_ap_policy_optr(_v_policy, &policy, _ctx);
  a = &_c1;
  camlidl_ml2c_abstract1_struct_ap_abstract1_t(_v_a, &_c1, _ctx);
  v = &_c2;
  camlidl_ml2c_tcons1_struct_ap_tcons1_array_t(_v_v, &_c2, _ctx);
  _res = ap_abstract1_policy_meet_tcons_array_improve(pman, policy, a, v);
  _vres = camlidl_c2ml_policy_ap_policy_ptr(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
if (pman->man->result.exn!=AP_EXC_NONE) camlidl_apron_manager_check_exception(pman->man,_ctx);
  /* end user-supplied deallocation sequence */
  return _vres;
}

