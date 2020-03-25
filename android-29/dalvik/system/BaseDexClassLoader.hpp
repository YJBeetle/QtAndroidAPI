#pragma once

#ifndef DALVIK_SYSTEM_BASEDEXCLASSLOADER
#define DALVIK_SYSTEM_BASEDEXCLASSLOADER

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/ClassLoader.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::lang
{
	class Package;
}

namespace __jni_impl::dalvik::system
{
	class BaseDexClassLoader : public __jni_impl::java::lang::ClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::io::File arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject findLibrary(jstring arg0);
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/net/URL.hpp"
#include "../../java/lang/Package.hpp"

namespace __jni_impl::dalvik::system
{
	// Fields
	
	// Constructors
	void BaseDexClassLoader::__constructor(jstring arg0, __jni_impl::java::io::File arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.BaseDexClassLoader",
			"(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject BaseDexClassLoader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject BaseDexClassLoader::findLibrary(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findLibrary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
} // namespace __jni_impl::dalvik::system

namespace dalvik::system
{
	class BaseDexClassLoader : public __jni_impl::dalvik::system::BaseDexClassLoader
	{
	public:
		BaseDexClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		BaseDexClassLoader(jstring arg0, __jni_impl::java::io::File arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace dalvik::system

#endif // DALVIK_SYSTEM_BASEDEXCLASSLOADER

