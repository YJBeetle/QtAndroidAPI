#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "BaseDexClassLoader.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::dalvik::system
{
	class PathClassLoader : public __jni_impl::dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2);
		
		// Methods
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void PathClassLoader::__constructor(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void PathClassLoader::__constructor(const QString &arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void PathClassLoader::__constructor(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void PathClassLoader::__constructor(const QString &arg0, const QString &arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.PathClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class PathClassLoader : public __jni_impl::dalvik::system::PathClassLoader
	{
	public:
		PathClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		PathClassLoader(jstring arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PathClassLoader(jstring arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace dalvik::system

