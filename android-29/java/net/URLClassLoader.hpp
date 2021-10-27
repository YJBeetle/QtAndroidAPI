#pragma once

#ifndef JAVA_NET_URLCLASSLOADER
#define JAVA_NET_URLCLASSLOADER

#include "../../__JniBaseClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../security/SecureClassLoader.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
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
namespace __jni_impl::java::security
{
	class AccessControlContext;
}
namespace __jni_impl::java::security
{
	class CodeSource;
}
namespace __jni_impl::java::security
{
	class PermissionCollection;
}
namespace __jni_impl::java::util
{
	class WeakHashMap;
}
namespace __jni_impl::java::util::jar
{
	class Manifest;
}

namespace __jni_impl::java::net
{
	class URLClassLoader : public __jni_impl::java::security::SecureClassLoader
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jarray arg0);
		void __constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1);
		void __constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1, __jni_impl::__JniBaseClass arg2);
		void __constructor(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(const QString &arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2);
		void __constructor(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::__JniBaseClass arg3);
		void __constructor(const QString &arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::__JniBaseClass arg3);
		
		// Methods
		static QAndroidJniObject newInstance(jarray arg0);
		static QAndroidJniObject newInstance(jarray arg0, __jni_impl::java::lang::ClassLoader arg1);
		void close();
		QAndroidJniObject findResource(jstring arg0);
		QAndroidJniObject findResource(const QString &arg0);
		QAndroidJniObject findResources(jstring arg0);
		QAndroidJniObject findResources(const QString &arg0);
		QAndroidJniObject getResourceAsStream(jstring arg0);
		QAndroidJniObject getResourceAsStream(const QString &arg0);
		jarray getURLs();
	};
} // namespace __jni_impl::java::net

#include "../io/InputStream.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Package.hpp"
#include "URL.hpp"
#include "../security/AccessControlContext.hpp"
#include "../security/CodeSource.hpp"
#include "../security/PermissionCollection.hpp"
#include "../util/WeakHashMap.hpp"
#include "../util/jar/Manifest.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void URLClassLoader::__constructor(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;)V",
			arg0
		);
	}
	void URLClassLoader::__constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void URLClassLoader::__constructor(jarray arg0, __jni_impl::java::lang::ClassLoader arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void URLClassLoader::__constructor(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void URLClassLoader::__constructor(const QString &arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void URLClassLoader::__constructor(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	void URLClassLoader::__constructor(const QString &arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::__JniBaseClass arg3)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject URLClassLoader::newInstance(jarray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;)Ljava/net/URLClassLoader;",
			arg0
		);
	}
	QAndroidJniObject URLClassLoader::newInstance(jarray arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void URLClassLoader::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject URLClassLoader::findResource(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	QAndroidJniObject URLClassLoader::findResource(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject URLClassLoader::findResources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject URLClassLoader::findResources(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject URLClassLoader::getResourceAsStream(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	QAndroidJniObject URLClassLoader::getResourceAsStream(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray URLClassLoader::getURLs()
	{
		return __thiz.callObjectMethod(
			"getURLs",
			"()[Ljava/net/URL;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class URLClassLoader : public __jni_impl::java::net::URLClassLoader
	{
	public:
		URLClassLoader(QAndroidJniObject obj) { __thiz = obj; }
		URLClassLoader(jarray arg0)
		{
			__constructor(
				arg0);
		}
		URLClassLoader(jarray arg0, __jni_impl::java::lang::ClassLoader arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		URLClassLoader(jarray arg0, __jni_impl::java::lang::ClassLoader arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URLClassLoader(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		URLClassLoader(jstring arg0, jarray arg1, __jni_impl::java::lang::ClassLoader arg2, __jni_impl::__JniBaseClass arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace java::net

#endif // JAVA_NET_URLCLASSLOADER

