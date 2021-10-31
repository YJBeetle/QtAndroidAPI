#include "../io/InputStream.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Package.hpp"
#include "./URL.hpp"
#include "../security/AccessControlContext.hpp"
#include "../security/CodeSource.hpp"
#include "../security/PermissionCollection.hpp"
#include "../util/WeakHashMap.hpp"
#include "../util/jar/Manifest.hpp"
#include "./URLClassLoader.hpp"

namespace java::net
{
	// Fields
	
	URLClassLoader::URLClassLoader(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	URLClassLoader::URLClassLoader(jarray arg0)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;)V",
			arg0
		);
	}
	URLClassLoader::URLClassLoader(jarray arg0, java::lang::ClassLoader arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	URLClassLoader::URLClassLoader(jarray arg0, java::lang::ClassLoader arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	URLClassLoader::URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2)
	{
		__thiz = QAndroidJniObject(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	URLClassLoader::URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2, __JniBaseClass arg3)
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
	QAndroidJniObject URLClassLoader::newInstance(jarray arg0, java::lang::ClassLoader arg1)
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
	QAndroidJniObject URLClassLoader::findResources(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
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
	jarray URLClassLoader::getURLs()
	{
		return __thiz.callObjectMethod(
			"getURLs",
			"()[Ljava/net/URL;"
		).object<jarray>();
	}
} // namespace java::net

