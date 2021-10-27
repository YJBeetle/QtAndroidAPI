#pragma once

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
namespace __jni_impl::java::lang
{
	class Package;
}
namespace __jni_impl::java::net
{
	class URL;
}

namespace __jni_impl::dalvik::system
{
	class BaseDexClassLoader : public __jni_impl::java::lang::ClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::java::io::File arg1, jstring arg2, __jni_impl::java::lang::ClassLoader arg3);
		void __constructor(const QString &arg0, __jni_impl::java::io::File arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3);
		
		// Methods
		jstring findLibrary(jstring arg0);
		jstring findLibrary(const QString &arg0);
		jstring toString();
	};
} // namespace __jni_impl::dalvik::system

#include "../../java/io/File.hpp"
#include "../../java/lang/ClassLoader.hpp"
#include "../../java/lang/Package.hpp"
#include "../../java/net/URL.hpp"

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
			arg3.__jniObject().object()
		);
	}
	void BaseDexClassLoader::__constructor(const QString &arg0, __jni_impl::java::io::File arg1, const QString &arg2, __jni_impl::java::lang::ClassLoader arg3)
	{
		__thiz = QAndroidJniObject(
			"dalvik.system.BaseDexClassLoader",
			"(Ljava/lang/String;Ljava/io/File;Ljava/lang/String;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	jstring BaseDexClassLoader::findLibrary(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findLibrary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring BaseDexClassLoader::findLibrary(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findLibrary",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring BaseDexClassLoader::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

