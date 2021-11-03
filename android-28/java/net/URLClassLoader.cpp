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
	
	// QJniObject forward
	URLClassLoader::URLClassLoader(QJniObject obj) : java::security::SecureClassLoader(obj) {}
	
	// Constructors
	URLClassLoader::URLClassLoader(jarray arg0)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;)V",
			arg0
		) {}
	URLClassLoader::URLClassLoader(jarray arg0, java::lang::ClassLoader arg1)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1.object()
		) {}
	URLClassLoader::URLClassLoader(jarray arg0, java::lang::ClassLoader arg1, JObject arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0,
			arg1.object(),
			arg2.object()
		) {}
	URLClassLoader::URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	URLClassLoader::URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2, JObject arg3)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	java::net::URLClassLoader URLClassLoader::newInstance(jarray arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;)Ljava/net/URLClassLoader;",
			arg0
		);
	}
	java::net::URLClassLoader URLClassLoader::newInstance(jarray arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;",
			arg0,
			arg1.object()
		);
	}
	void URLClassLoader::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::net::URL URLClassLoader::findResource(jstring arg0)
	{
		return callObjectMethod(
			"findResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0
		);
	}
	JObject URLClassLoader::findResources(jstring arg0)
	{
		return callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	java::io::InputStream URLClassLoader::getResourceAsStream(jstring arg0)
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0
		);
	}
	jarray URLClassLoader::getURLs()
	{
		return callObjectMethod(
			"getURLs",
			"()[Ljava/net/URL;"
		).object<jarray>();
	}
} // namespace java::net

