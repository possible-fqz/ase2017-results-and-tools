
/* This file is part of the APRON Library, released under LGPL license  with an exception allowing the redistribution of statically linked executables.
  Please read the COPYING file packaged in the distribution  *//* File generated from lincons1.idl */

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
#include "ap_lincons1.h"
#include "apron_caml.h"

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

void camlidl_ml2c_lincons1_struct_ap_lincons1_t(value _v1, struct ap_lincons1_t * _c2, camlidl_ctx _ctx)
{
  value _v3;
  value _v4;
  _v3 = Field(_v1, 0);
  camlidl_ml2c_lincons0_ap_lincons0_t(_v3, &(*_c2).lincons0, _ctx);
  _v4 = Field(_v1, 1);
  camlidl_ml2c_environment_ap_environment_ptr(_v4, &(*_c2).env, _ctx);
}

value camlidl_c2ml_lincons1_struct_ap_lincons1_t(struct ap_lincons1_t * _c1, camlidl_ctx _ctx)
{
  value _v2;
  value _v3[2];
  _v3[0] = _v3[1] = 0;
  Begin_roots_block(_v3, 2)
    _v3[0] = camlidl_c2ml_lincons0_ap_lincons0_t(&(*_c1).lincons0, _ctx);
    _v3[1] = camlidl_c2ml_environment_ap_environment_ptr(&(*_c1).env, _ctx);
    _v2 = camlidl_alloc_small(2, 0);
    Field(_v2, 0) = _v3[0];
    Field(_v2, 1) = _v3[1];
  End_roots()
  return _v2;
}

void camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(value _v1, struct ap_lincons1_array_t * _c2, camlidl_ctx _ctx)
{
  value _v3;
  value _v4;
  _v3 = Field(_v1, 0);
  camlidl_ml2c_lincons0_struct_ap_lincons0_array_t(_v3, &(*_c2).lincons0_array, _ctx);
  _v4 = Field(_v1, 1);
  camlidl_ml2c_environment_ap_environment_ptr(_v4, &(*_c2).env, _ctx);
}

value camlidl_c2ml_lincons1_struct_ap_lincons1_array_t(struct ap_lincons1_array_t * _c1, camlidl_ctx _ctx)
{
  value _v2;
  value _v3[2];
  _v3[0] = _v3[1] = 0;
  Begin_roots_block(_v3, 2)
    _v3[0] = camlidl_c2ml_lincons0_struct_ap_lincons0_array_t(&(*_c1).lincons0_array, _ctx);
    _v3[1] = camlidl_c2ml_environment_ap_environment_ptr(&(*_c1).env, _ctx);
    _v2 = camlidl_alloc_small(2, 0);
    Field(_v2, 0) = _v3[0];
    Field(_v2, 1) = _v3[1];
  End_roots()
  return _v2;
}

value camlidl_lincons1_ap_lincons1_get_coeff(
	value _v_a,
	value _v_var)
{
  struct ap_lincons1_t *a; /*in*/
  ap_var_t var; /*in*/
  struct ap_coeff_t _res;
  struct ap_lincons1_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  a = &_c1;
  camlidl_ml2c_lincons1_struct_ap_lincons1_t(_v_a, &_c1, _ctx);
  camlidl_ml2c_var_ap_var_t(_v_var, &var, _ctx);
  /* begin user-supplied calling sequence */

{
bool b;
ap_coeff_init(&_res,AP_COEFF_SCALAR);
b = ap_lincons1_get_coeff(&_res,a,var);
if (b){
char str[160];
char* name;
ap_coeff_clear(&_res);
name = ap_var_operations->to_string(var);
snprintf(str,159,"Lincons1.get_coeff: unknown variable %s in the environment",name);
free(name);
caml_failwith(str);
}
}

  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_coeff_struct_ap_coeff_t(&_res, _ctx);
  camlidl_free(_ctx);
  /* begin user-supplied deallocation sequence */
ap_coeff_clear(&_res);
  /* end user-supplied deallocation sequence */
  return _vres;
}

value camlidl_lincons1_ap_lincons1_set_coeff(
	value _v_a,
	value _v_var,
	value _v_coeff)
{
  struct ap_lincons1_t *a; /*in*/
  ap_var_t var; /*in*/
  struct ap_coeff_t *coeff; /*in*/
  struct ap_lincons1_t _c1;
  struct ap_coeff_t _c2;
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  a = &_c1;
  camlidl_ml2c_lincons1_struct_ap_lincons1_t(_v_a, &_c1, _ctx);
  camlidl_ml2c_var_ap_var_t(_v_var, &var, _ctx);
  coeff = &_c2;
  camlidl_ml2c_coeff_struct_ap_coeff_t(_v_coeff, &_c2, _ctx);
  /* begin user-supplied calling sequence */

{
bool b;
b = ap_lincons1_set_coeff(a,var,coeff);
if (b){
char str[160];
char* name;
name = ap_var_operations->to_string(var);
snprintf(str,159,"Lincons1.set_coeff: unknown variable %s in the environment",name);
free(name);
caml_failwith(str);
}
}

  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  return Val_unit;
}

value camlidl_lincons1_ap_lincons1_make_unsat(
	value _v_env)
{
  ap_environment_ptr env; /*in*/
  struct ap_lincons1_t _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_environment_ap_environment_ptr(_v_env, &env, _ctx);
  _res = ap_lincons1_make_unsat(env);
  _vres = camlidl_c2ml_lincons1_struct_ap_lincons1_t(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_lincons1_ap_lincons1_is_unsat(
	value _v_cons)
{
  struct ap_lincons1_t *cons; /*in*/
  int _res;
  struct ap_lincons1_t _c1;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  cons = &_c1;
  camlidl_ml2c_lincons1_struct_ap_lincons1_t(_v_cons, &_c1, _ctx);
  _res = ap_lincons1_is_unsat(cons);
  _vres = Val_int(_res);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_lincons1_ap_lincons1_extend_environment(
	value _v_lincons,
	value _v_env)
{
  struct ap_lincons1_t lincons; /*in*/
  ap_environment_ptr env; /*in*/
  struct ap_lincons1_t _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_lincons1_struct_ap_lincons1_t(_v_lincons, &lincons, _ctx);
  camlidl_ml2c_environment_ap_environment_ptr(_v_env, &env, _ctx);
  /* begin user-supplied calling sequence */

{
bool b;
b = ap_lincons1_extend_environment(&_res,&lincons,env);
if (b) caml_failwith("Lincons1.extend_environment: new environment is not a superenvironment");
}
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_lincons1_struct_ap_lincons1_t(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_lincons1_ap_lincons1_extend_environment_with(
	value _v_lincons,
	value _v_env)
{
  struct ap_lincons1_t lincons; /*in*/
  ap_environment_ptr env; /*in*/
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_lincons1_struct_ap_lincons1_t(_v_lincons, &lincons, _ctx);
  camlidl_ml2c_environment_ap_environment_ptr(_v_env, &env, _ctx);
  /* begin user-supplied calling sequence */

{
if (lincons.env!=env){ 
Begin_roots2(_v_lincons,_v_env);
    bool b;
ap_environment_copy(lincons.env); /* it will be decremented by the call */ 
b = ap_lincons1_extend_environment_with(&lincons,env);
if (b){ 
ap_environment_free(lincons.env); 
caml_failwith("Lincons1.extend_environment_with: new environment is not a superenvironment");
}
ap_environment_free(env);
Store_field(_v_lincons,1,_v_env);
End_roots();
}
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  return Val_unit;
}

value camlidl_lincons1_ap_lincons1_array_extend_environment(
	value _v_array,
	value _v_env)
{
  struct ap_lincons1_array_t array; /*in*/
  ap_environment_ptr env; /*in*/
  struct ap_lincons1_array_t _res;
  value _vres;

  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(_v_array, &array, _ctx);
  camlidl_ml2c_environment_ap_environment_ptr(_v_env, &env, _ctx);
  /* begin user-supplied calling sequence */

{
bool b;
b = ap_lincons1_array_extend_environment(&_res,&array,env);
if (b) caml_failwith("Lincons1.array_extend_environment: new environment is not a superenvironment");
}
  /* end user-supplied calling sequence */
  _vres = camlidl_c2ml_lincons1_struct_ap_lincons1_array_t(&_res, _ctx);
  camlidl_free(_ctx);
  return _vres;
}

value camlidl_lincons1_ap_lincons1_array_extend_environment_with(
	value _v_array,
	value _v_env)
{
  struct ap_lincons1_array_t array; /*in*/
  ap_environment_ptr env; /*in*/
  struct camlidl_ctx_struct _ctxs = { CAMLIDL_TRANSIENT, NULL };
  camlidl_ctx _ctx = &_ctxs;
  camlidl_ml2c_lincons1_struct_ap_lincons1_array_t(_v_array, &array, _ctx);
  camlidl_ml2c_environment_ap_environment_ptr(_v_env, &env, _ctx);
  /* begin user-supplied calling sequence */

{
if (array.env!=env){ 
Begin_roots2(_v_array,_v_env);
    bool b;
ap_environment_copy(array.env); /* to protect it */ 
b = ap_lincons1_array_extend_environment_with(&array,env);
if (b){ 
ap_environment_free(array.env); 
caml_failwith("Lincons1.array_extend_environment_with: new environment is not a superenvironment");
}
ap_environment_free(env);
Store_field(_v_array,1,_v_env);
End_roots();
}
}
  /* end user-supplied calling sequence */
  camlidl_free(_ctx);
  return Val_unit;
}

