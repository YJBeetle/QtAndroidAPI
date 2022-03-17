#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JClass.hpp"
#include "../../../JObject.hpp"
#include "../RuntimeException.def.hpp"
#include "../../../JString.hpp"
#include "./MethodHandle.def.hpp"
#include "./MethodHandles_Lookup.def.hpp"
#include "./MethodType.def.hpp"
#include "../../nio/ByteOrder.def.hpp"
#include "../../security/Permission.def.hpp"
#include "./MethodHandles.def.hpp"

namespace java::lang::invoke
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::lang::invoke::MethodHandle MethodHandles::arrayConstructor(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayConstructor",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::arrayElementGetter(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementGetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::arrayElementSetter(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementSetter",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline JObject MethodHandles::arrayElementVarHandle(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayElementVarHandle",
			"(Ljava/lang/Class;)Ljava/lang/invoke/VarHandle;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::arrayLength(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"arrayLength",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline JObject MethodHandles::byteArrayViewVarHandle(JClass arg0, java::nio::ByteOrder arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteArrayViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline JObject MethodHandles::byteBufferViewVarHandle(JClass arg0, java::nio::ByteOrder arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"byteBufferViewVarHandle",
			"(Ljava/lang/Class;Ljava/nio/ByteOrder;)Ljava/lang/invoke/VarHandle;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::catchException(java::lang::invoke::MethodHandle arg0, JClass arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"catchException",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object<jclass>(),
			arg2.object()
		);
	}
	inline JObject MethodHandles::classData(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JClass arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classData",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jclass>()
		);
	}
	inline JObject MethodHandles::classDataAt(java::lang::invoke::MethodHandles_Lookup arg0, JString arg1, JClass arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"classDataAt",
			"(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/Class;I)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object<jclass>(),
			arg3
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::collectArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"collectArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::constant(JClass arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"constant",
			"(Ljava/lang/Class;Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jobject>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::countedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2, java::lang::invoke::MethodHandle arg3)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"countedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::doWhileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"doWhileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::dropArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::dropArgumentsToMatch(java::lang::invoke::MethodHandle arg0, jint arg1, JObject arg2, jint arg3)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropArgumentsToMatch",
			"(Ljava/lang/invoke/MethodHandle;ILjava/util/List;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::dropReturn(java::lang::invoke::MethodHandle arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"dropReturn",
			"(Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::empty(java::lang::invoke::MethodType arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"empty",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::exactInvoker(java::lang::invoke::MethodType arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"exactInvoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::explicitCastArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"explicitCastArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::filterArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JArray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::filterReturnValue(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"filterReturnValue",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::foldArguments(java::lang::invoke::MethodHandle arg0, jint arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"foldArguments",
			"(Ljava/lang/invoke/MethodHandle;ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::guardWithTest(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"guardWithTest",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::identity(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"identity",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::insertArguments(java::lang::invoke::MethodHandle arg0, jint arg1, JObjectArray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"insertArguments",
			"(Ljava/lang/invoke/MethodHandle;I[Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1,
			arg2.object<jobjectArray>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::invoker(java::lang::invoke::MethodType arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"invoker",
			"(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::iteratedLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"iteratedLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandles_Lookup MethodHandles::lookup()
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"lookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::loop(JArray arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"loop",
			"([[Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jarray>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::permuteArguments(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodType arg1, JIntArray arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"permuteArguments",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;[I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object<jintArray>()
		);
	}
	inline java::lang::invoke::MethodHandles_Lookup MethodHandles::privateLookupIn(JClass arg0, java::lang::invoke::MethodHandles_Lookup arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"privateLookupIn",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandles$Lookup;)Ljava/lang/invoke/MethodHandles$Lookup;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandles_Lookup MethodHandles::publicLookup()
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"publicLookup",
			"()Ljava/lang/invoke/MethodHandles$Lookup;"
		);
	}
	inline JObject MethodHandles::reflectAs(JClass arg0, java::lang::invoke::MethodHandle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"reflectAs",
			"(Ljava/lang/Class;Ljava/lang/invoke/MethodHandle;)Ljava/lang/reflect/Member;",
			arg0.object<jclass>(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::spreadInvoker(java::lang::invoke::MethodType arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"spreadInvoker",
			"(Ljava/lang/invoke/MethodType;I)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::throwException(JClass arg0, JClass arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"throwException",
			"(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>(),
			arg1.object<jclass>()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::tryFinally(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"tryFinally",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::varHandleExactInvoker(JObject arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleExactInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::varHandleInvoker(JObject arg0, java::lang::invoke::MethodType arg1)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"varHandleInvoker",
			"(Ljava/lang/invoke/VarHandle$AccessMode;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::whileLoop(java::lang::invoke::MethodHandle arg0, java::lang::invoke::MethodHandle arg1, java::lang::invoke::MethodHandle arg2)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"whileLoop",
			"(Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::invoke::MethodHandle MethodHandles::zero(JClass arg0)
	{
		return callStaticObjectMethod(
			"java.lang.invoke.MethodHandles",
			"zero",
			"(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;",
			arg0.object<jclass>()
		);
	}
} // namespace java::lang::invoke

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::invoke;
#endif
