#pragma once

#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../ClassLoader.def.hpp"
#include "../ClassValue.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../invoke/MethodHandle.def.hpp"
#include "../invoke/MethodHandles_Lookup.def.hpp"
#include "../invoke/MethodType.def.hpp"
#include "./Constructor.def.hpp"
#include "./Method.def.hpp"
#include "../../util/concurrent/ConcurrentHashMap.def.hpp"
#include "./Proxy.def.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Proxy::getInvocationHandler(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getInvocationHandler",
			"(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;",
			arg0.object<jobject>()
		);
	}
	inline JClass Proxy::getProxyClass(java::lang::ClassLoader arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getProxyClass",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline jboolean Proxy::isProxyClass(JClass arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Proxy",
			"isProxyClass",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	inline JObject Proxy::newProxyInstance(java::lang::ClassLoader arg0, JArray arg1, JObject arg2)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"newProxyInstance",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;",
			arg0.object(),
			arg1.object<jarray>(),
			arg2.object()
		);
	}
} // namespace java::lang::reflect

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::lang::reflect;
#endif
