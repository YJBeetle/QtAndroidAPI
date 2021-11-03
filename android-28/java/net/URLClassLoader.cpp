#include "../../JArray.hpp"
#include "../io/InputStream.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.hpp"
#include "../lang/Package.hpp"
#include "../../JString.hpp"
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
	URLClassLoader::URLClassLoader(JArray arg0)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;)V",
			arg0.object<jarray>()
		) {}
	URLClassLoader::URLClassLoader(JArray arg0, java::lang::ClassLoader arg1)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0.object<jarray>(),
			arg1.object()
		) {}
	URLClassLoader::URLClassLoader(JArray arg0, java::lang::ClassLoader arg1, JObject arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		) {}
	URLClassLoader::URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		) {}
	URLClassLoader::URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2, JObject arg3)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	java::net::URLClassLoader URLClassLoader::newInstance(JArray arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;)Ljava/net/URLClassLoader;",
			arg0.object<jarray>()
		);
	}
	java::net::URLClassLoader URLClassLoader::newInstance(JArray arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;",
			arg0.object<jarray>(),
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
	java::net::URL URLClassLoader::findResource(JString arg0)
	{
		return callObjectMethod(
			"findResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	JObject URLClassLoader::findResources(JString arg0)
	{
		return callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	java::io::InputStream URLClassLoader::getResourceAsStream(JString arg0)
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	JArray URLClassLoader::getURLs()
	{
		return callObjectMethod(
			"getURLs",
			"()[Ljava/net/URL;"
		);
	}
} // namespace java::net

