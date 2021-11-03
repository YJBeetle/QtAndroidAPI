#include "../../../JArray.hpp"
#include "../../../JObjectArray.hpp"
#include "../../../JClass.hpp"
#include "../ClassLoader.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../invoke/MethodHandle.hpp"
#include "../invoke/MethodHandles_Lookup.hpp"
#include "../invoke/MethodType.hpp"
#include "./Constructor.hpp"
#include "./Method.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"
#include "./Proxy.hpp"

namespace java::lang::reflect
{
	// Fields
	
	// QJniObject forward
	Proxy::Proxy(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject Proxy::getInvocationHandler(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getInvocationHandler",
			"(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;",
			arg0.object<jobject>()
		);
	}
	JClass Proxy::getProxyClass(java::lang::ClassLoader arg0, JArray arg1)
	{
		return callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getProxyClass",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	jboolean Proxy::isProxyClass(JClass arg0)
	{
		return callStaticMethod<jboolean>(
			"java.lang.reflect.Proxy",
			"isProxyClass",
			"(Ljava/lang/Class;)Z",
			arg0.object<jclass>()
		);
	}
	JObject Proxy::newProxyInstance(java::lang::ClassLoader arg0, JArray arg1, JObject arg2)
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

