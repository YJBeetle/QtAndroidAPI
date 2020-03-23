#pragma once

#ifndef DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER
#define DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER

#include "BaseDexClassLoader.hpp"

namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::nio
{
	class ByteBuffer;
}

namespace __jni_impl::dalvik::system
{
	class InMemoryDexClassLoader : public __jni_impl::dalvik::system::BaseDexClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::lang::ClassLoader arg1);
		
		// Methods
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/lang/ClassLoader.hpp"
#include "../../java/nio/ByteBuffer.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void InMemoryDexClassLoader::__constructor(jarray arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void InMemoryDexClassLoader::__constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"([Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void InMemoryDexClassLoader::__constructor(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.InMemoryDexClassLoader",
			"(Ljava/nio/ByteBuffer;Ljava/lang/ClassLoader;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class InMemoryDexClassLoader : public __jni_impl::dalvik::system::InMemoryDexClassLoader
	{
	public:
		InMemoryDexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		InMemoryDexClassLoader(jarray arg0, jstring arg1, __jni_impl::java::lang::ClassLoader arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		InMemoryDexClassLoader(jarray arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		InMemoryDexClassLoader(__jni_impl::java::nio::ByteBuffer arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace dalvik::system

#endif // DALVIK_SYSTEM_INMEMORYDEXCLASSLOADER

