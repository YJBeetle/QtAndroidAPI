#include "../ClassLoader.hpp"
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
	
	// QAndroidJniObject forward
	Proxy::Proxy(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass Proxy::getInvocationHandler(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getInvocationHandler",
			"(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;",
			arg0
		);
	}
	jclass Proxy::getProxyClass(java::lang::ClassLoader arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getProxyClass",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.object(),
			arg1
		).object<jclass>();
	}
	jboolean Proxy::isProxyClass(jclass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Proxy",
			"isProxyClass",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jobject Proxy::newProxyInstance(java::lang::ClassLoader arg0, jarray arg1, __JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"newProxyInstance",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;",
			arg0.object(),
			arg1,
			arg2.object()
		).object<jobject>();
	}
} // namespace java::lang::reflect

