/*
 * This file was generated by orbit-idl-2 - DO NOT EDIT!
 */

#include <string.h>
#define ORBIT2_STUBS_API
#define ORBIT_IDL_C_COMMON
#define test_any_COMMON
#include "test-any.h"

static const CORBA_unsigned_long ORBit_zero_int = 0;

#ifndef ORBIT_IDL_C_IMODULE_test_any
void _ORBIT_skel_small_TestAny_print(POA_TestAny             *_o_servant, gpointer            _o_retval,gpointer           *_o_args,CORBA_Context       _o_ctx,CORBA_Environment  *_o_ev,
CORBA_any* (*_impl_print)(PortableServer_Servant _servant, const CORBA_any* what, CORBA_Environment *ev)) {
*(CORBA_any* *)_o_retval = _impl_print (_o_servant, (const CORBA_any*)_o_args[0], _o_ev);
}

#endif
#if ( (TC_IMPL_TC_TestAnyStruct_0 == 't') \
&& (TC_IMPL_TC_TestAnyStruct_1 == 'e') \
&& (TC_IMPL_TC_TestAnyStruct_2 == 's') \
&& (TC_IMPL_TC_TestAnyStruct_3 == 't') \
&& (TC_IMPL_TC_TestAnyStruct_4 == '_') \
&& (TC_IMPL_TC_TestAnyStruct_5 == 'a') \
&& (TC_IMPL_TC_TestAnyStruct_6 == 'n') \
&& (TC_IMPL_TC_TestAnyStruct_7 == 'y') \
) && !defined(TC_DEF_TC_TestAnyStruct)
#define TC_DEF_TC_TestAnyStruct 1
static const char *anon_subnames_array0[] = {"string_value", "long_value"};
static ORBIT2_MAYBE_CONST CORBA_TypeCode anon_subtypes_array1[] = {(CORBA_TypeCode)&TC_CORBA_string_struct, (CORBA_TypeCode)&TC_CORBA_long_struct};
#ifdef ORBIT_IDL_C_IMODULE_test_any
static
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_TestAnyStruct_struct = {
{&ORBit_TypeCode_epv, ORBIT_REFCOUNT_STATIC},
CORBA_tk_struct,
0,
0,
MAX (ORBIT_ALIGNOF_CORBA_LONG, MAX (ORBIT_ALIGNOF_CORBA_POINTER, 1)),
0,
2
,
(CORBA_TypeCode *)anon_subtypes_array1,
CORBA_OBJECT_NIL,
(char *)"TestAnyStruct",
(char *)"IDL:TestAnyStruct:1.0",
(char **)anon_subnames_array0,
NULL,
-1,
0,
0, 0
};
#endif
#if ( (TC_IMPL_TC_TestAny_0 == 't') \
&& (TC_IMPL_TC_TestAny_1 == 'e') \
&& (TC_IMPL_TC_TestAny_2 == 's') \
&& (TC_IMPL_TC_TestAny_3 == 't') \
&& (TC_IMPL_TC_TestAny_4 == '_') \
&& (TC_IMPL_TC_TestAny_5 == 'a') \
&& (TC_IMPL_TC_TestAny_6 == 'n') \
&& (TC_IMPL_TC_TestAny_7 == 'y') \
) && !defined(TC_DEF_TC_TestAny)
#define TC_DEF_TC_TestAny 1
#ifdef ORBIT_IDL_C_IMODULE_test_any
static
#endif
ORBIT2_MAYBE_CONST struct CORBA_TypeCode_struct TC_TestAny_struct = {
{&ORBit_TypeCode_epv, ORBIT_REFCOUNT_STATIC},
CORBA_tk_objref,
0,
0,
ORBIT_ALIGNOF_CORBA_POINTER,
0,
0
,
NULL,
CORBA_OBJECT_NIL,
(char *)"TestAny",
(char *)"IDL:TestAny:1.0",
NULL,
NULL,
-1,
0,
0, 0
};
#endif

#ifndef ORBIT_IDL_C_IMODULE_test_any
CORBA_unsigned_long TestAny__classid = 0;
#endif

/* Interface type data */

static ORBit_IArg TestAny_print__arginfo [] = {
	{ TC_CORBA_any,  ORBit_I_ARG_IN , (char *)"what" }
};

#ifdef ORBIT_IDL_C_IMODULE_test_any
static
#endif
ORBit_IMethod TestAny__imethods [] = {
	{
		{ 1, 1, TestAny_print__arginfo, FALSE },
		{ 0, 0, NULL, FALSE },
		{ 0, 0, NULL, FALSE },
		TC_CORBA_any, (char *)"print", 5,
		0
}
};

static CORBA_string TestAny__base_itypes[] = {
(char *)"IDL:omg.org/CORBA/Object:1.0"
};
#ifdef ORBIT_IDL_C_IMODULE_test_any
static
#endif
ORBit_IInterface TestAny__iinterface = {
TC_TestAny,{1, 1, TestAny__imethods, FALSE},
{1, 1, TestAny__base_itypes, FALSE}
};

