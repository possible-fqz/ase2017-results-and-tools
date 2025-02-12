
(* This file is part of the MLGmpIDL interface, released under LGPL license with an exception allowing the redistribution of statically linked executables.
  Please read the COPYING file packaged in the distribution  *)(* File generated from mpq.idl *)

type 'a tt


(** GMP multi-precision rationals *)



type m (** Mutable tag *)
type f (** Functional (immutable) tag *)
type t = m tt (** Mutable multi-precision rationals *)

(** The following operations are mapped as much as possible to their C counterpart. In case of imperative functions (like [set], [add], ...) the first parameter of type [t] is an out-parameter and holds the result when the function returns. For instance, [add x y z] adds the values of [y] and [z] and stores the result in [x].

 These functions are as efficient as their C counterpart: they do not imply additional memory allocation, unlike the corresponding functions in the module {!Mpqf}. *)


external canonicalize : 'a tt -> unit
	= "camlidl_mpq_mpq_canonicalize"


(** {2 Initialization and Assignment Functions} *)
(** {{:http://gmplib.org/manual/Initializing-Rationals.html#Initializing-Rationals}C documentation} *)

external init : unit -> 'a tt
	= "camlidl_mpq_mpq_init"

external set : t -> 'a tt -> unit
	= "camlidl_mpq_mpq_set"

external set_z : t -> 'a Mpz.tt -> unit
	= "camlidl_mpq_mpq_set_z"

external set_si : t -> int -> int -> unit
	= "camlidl_mpq_mpq_set_si"

external _set_str : t -> string -> int -> unit
	= "camlidl_mpq_mpq__set_str"

let set_str a b ~base = _set_str a b base
external swap : t -> t -> unit
	= "camlidl_mpq_mpq_swap"


(** {2 Conversion Functions} *)
(** {{:http://gmplib.org/manual/Rational-Conversions.html#Rational-Conversions}C documentation} *)

external get_d : 'a tt -> float
	= "camlidl_mpq_mpq_get_d"

external set_d : t -> float -> unit
	= "camlidl_mpq_mpq_set_d"

external get_z : Mpz.t -> 'a tt -> unit
	= "camlidl_mpq_mpq_get_z"

external _get_str : int -> 'a tt -> string
	= "camlidl_mpq_mpq__get_str"

let get_str ~base a = _get_str base a

(** {2 Arithmetic Functions} *)
(** {{:http://gmplib.org/manual/Rational-Arithmetic.html#Rational-Arithmetic}C documentation} *)

external add : t -> 'a tt -> 'b tt -> unit
	= "camlidl_mpq_mpq_add"

external sub : t -> 'a tt -> 'b tt -> unit
	= "camlidl_mpq_mpq_sub"

external mul : t -> 'a tt -> 'b tt -> unit
	= "camlidl_mpq_mpq_mul"

external mul_2exp : t -> 'a tt -> int -> unit
	= "camlidl_mpq_mpq_mul_2exp"

external div : t -> 'a tt -> 'b tt -> unit
	= "camlidl_mpq_mpq_div"

external div_2exp : t -> 'a tt -> int -> unit
	= "camlidl_mpq_mpq_div_2exp"

external neg : t -> 'a tt -> unit
	= "camlidl_mpq_mpq_neg"

external abs : t -> 'a tt -> unit
	= "camlidl_mpq_mpq_abs"

external inv : t -> 'a tt -> unit
	= "camlidl_mpq_mpq_inv"


(** {2 Comparison Functions} *)
(** {{:http://gmplib.org/manual/Comparing-Rationals.html#Comparing-Rationals}C documentation} *)

external cmp : 'a tt -> 'b tt -> int
	= "camlidl_mpq_mpq_cmp"

external cmp_si : 'a tt -> int -> int -> int
	= "camlidl_mpq_mpq_cmp_si"

external sgn : 'a tt -> int
	= "camlidl_mpq_mpq_sgn"

external equal : 'a tt -> 'b tt -> bool
	= "camlidl_mpq_mpq_equal"


(** {2 Applying Integer Functions to Rationals} *)
(** {{:http://gmplib.org/manual/Applying-Integer-Functions.html#Applying-Integer-Functions}C documentation} *)

external get_num : Mpz.t -> 'a tt -> unit
	= "camlidl_mpq_mpq_get_num"

external get_den : Mpz.t -> 'a tt -> unit
	= "camlidl_mpq_mpq_get_den"

external set_num : t -> 'a Mpz.tt -> unit
	= "camlidl_mpq_mpq_set_num"

external set_den : t -> 'a Mpz.tt -> unit
	= "camlidl_mpq_mpq_set_den"


(** {2 Input and Output Functions: not interfaced} *)


(** {2 Pretty printing} *)

let print fmt x = Format.pp_print_string fmt (get_str 10 x)
let (_gen : m tt -> 'a tt) = Obj.magic
let init_set x = let y = init() in set y x; _gen y
let init_set_z z = let x = init() in set_z x z; _gen x
let init_set_si n d = let x = init() in set_si x n d; _gen x
let init_set_str str ~base = let x = init() in ignore (set_str x str ~base); _gen x
let init_set_d d = let x = init() in set_d x d; _gen x
let to_string x = get_str 10 x
let to_float = get_d
let of_string str = init_set_str str 10
let of_float = init_set_d
let of_int a = init_set_si a 1
let of_frac = init_set_si
let of_mpz = init_set_z
let of_mpz2 num den = let res = init() in set_num res num; set_den res den; canonicalize res; _gen res
