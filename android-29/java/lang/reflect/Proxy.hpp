#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandle;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodHandles_Lookup;
}
namespace __jni_impl::java::lang::invoke
{
	class MethodType;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
}
namespace __jni_impl::java::lang::reflect
{
	class Method;
}
namespace __jni_impl::java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace __jni_impl::java::lang::reflect
{
	class Proxy : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInvocationHandler(jobject arg0);
		static jclass getProxyClass(__jni_impl::java::lang::ClassLoader arg0, jarray arg1);
		static jboolean isProxyClass(jclass arg0);
		static jobject newProxyInstance(__jni_impl::java::lang::ClassLoader arg0, jarray arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::java::lang::reflect

#include "../ClassLoader.hpp"
#include "../invoke/MethodHandle.hpp"
#include "../invoke/MethodHandles_Lookup.hpp"
#include "../invoke/MethodType.hpp"
#include "./Constructor.hpp"
#include "./Method.hpp"
#include "../../util/concurrent/ConcurrentHashMap.hpp"

namespace __jni_impl::java::lang::reflect
{
	// Fields
	
	// Constructors
	void Proxy::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.lang.reflect.Proxy",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Proxy::getInvocationHandler(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getInvocationHandler",
			"(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;",
			arg0
		);
	}
	jclass Proxy::getProxyClass(__jni_impl::java::lang::ClassLoader arg0, jarray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getProxyClass",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;)Ljava/lang/Class;",
			arg0.__jniObject().object(),
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
	jobject Proxy::newProxyInstance(__jni_impl::java::lang::ClassLoader arg0, jarray arg1, __jni_impl::__JniBaseClass arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"newProxyInstance",
			"(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/lang/reflect/InvocationHandler;)Ljava/lang/Object;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		).object<jobject>();
	}
} // namespace __jni_impl::java::lang::reflect

namespace java::lang::reflect
{
	class Proxy : public __jni_impl::java::lang::reflect::Proxy
	{
	public:
		Proxy(QAndroidJniObject obj) { __thiz = obj; }
		Proxy()
		{
			__constructor();
		}
	};
} // namespace java::lang::reflect

