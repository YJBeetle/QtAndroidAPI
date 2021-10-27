#pragma once

#ifndef DALVIK_SYSTEM_DELEGATELASTCLASSLOADER
#define DALVIK_SYSTEM_DELEGATELASTCLASSLOADER

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "BaseDexClassLoader.hpp"
#include "PathClassLoader.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::net
{
	class URL;
}

namespace __jni_impl::dalvik::system
{
	class DelegateLastClassLoader : public __jni_impl::dalvik::system::PathClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2, jboolean arg3);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2, jboolean arg3);
		
		// Methods
		QAndroidJniObject getResource(jstring arg0);
		QAndroidJniObject getResource(const QString &arg0);
		QAndroidJniObject getResources(jstring arg0);
		QAndroidJniObject getResources(const QString &arg0);
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/lang/ClassLoader.hpp"
#include "../../java/net/URL.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void DelegateLastClassLoader::__constructor(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DelegateLastClassLoader::__constructor(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void DelegateLastClassLoader::__constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void DelegateLastClassLoader::__constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void DelegateLastClassLoader::__constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3
		);
	}
	void DelegateLastClassLoader::__constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DelegateLastClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object(),
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject DelegateLastClassLoader::getResource(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject DelegateLastClassLoader::getResource(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DelegateLastClassLoader::getResources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject DelegateLastClassLoader::getResources(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class DelegateLastClassLoader : public __jni_impl::dalvik::system::DelegateLastClassLoader
	{
	public:
		DelegateLastClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		DelegateLastClassLoader(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DelegateLastClassLoader(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DelegateLastClassLoader(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace dalvik::system

#endif // DALVIK_SYSTEM_DELEGATELASTCLASSLOADER

