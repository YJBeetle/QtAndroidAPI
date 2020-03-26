#pragma once

#ifndef JAVA_LANG_REFLECT_PROXY
#define JAVA_LANG_REFLECT_PROXY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::lang::reflect
{
	class Constructor;
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
		static jboolean isProxyClass(jclass arg0);
		static jclass getProxyClass(__jni_impl::java::lang::ClassLoader arg0, jarray arg1);
		static jobject newProxyInstance(__jni_impl::java::lang::ClassLoader arg0, jarray arg1, __jni_impl::__JniBaseClass arg2);
		static QAndroidJniObject getInvocationHandler(jobject arg0);
	};
} // namespace __jni_impl::java::lang::reflect

#include "../ClassLoader.hpp"
#include "Constructor.hpp"

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
	jboolean Proxy::isProxyClass(jclass arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.lang.reflect.Proxy",
			"isProxyClass",
			"(Ljava/lang/Class;)Z",
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
	QAndroidJniObject Proxy::getInvocationHandler(jobject arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.lang.reflect.Proxy",
			"getInvocationHandler",
			"(Ljava/lang/Object;)Ljava/lang/reflect/InvocationHandler;",
			arg0
		);
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

#endif // JAVA_LANG_REFLECT_PROXY

