#pragma once

#ifndef DALVIK_SYSTEM_DEXCLASSLOADER
#define DALVIK_SYSTEM_DEXCLASSLOADER

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "BaseDexClassLoader.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}

namespace __jni_impl::dalvik::system
{
	class DexClassLoader : public __jni_impl::dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3);
		
		// Methods
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void DexClassLoader::__constructor(jstring arg0, jstring arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	void DexClassLoader::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.DexClassLoader",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class DexClassLoader : public __jni_impl::dalvik::system::DexClassLoader
	{
	public:
		DexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		DexClassLoader(jstring arg0, jstring arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace dalvik::system

#endif // DALVIK_SYSTEM_DEXCLASSLOADER

