#pragma once

#include "../../JArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JClass.hpp"
#include "../lang/ClassLoader.def.hpp"
#include "../lang/Package.def.hpp"
#include "../../JString.hpp"
#include "./URL.def.hpp"
#include "../security/AccessControlContext.def.hpp"
#include "../security/CodeSource.def.hpp"
#include "../security/PermissionCollection.def.hpp"
#include "../util/WeakHashMap.def.hpp"
#include "../util/jar/Manifest.def.hpp"
#include "./URLClassLoader.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline URLClassLoader::URLClassLoader(JArray arg0)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;)V",
			arg0.object<jarray>()
		) {}
	inline URLClassLoader::URLClassLoader(JArray arg0, java::lang::ClassLoader arg1)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0.object<jarray>(),
			arg1.object()
		) {}
	inline URLClassLoader::URLClassLoader(JArray arg0, java::lang::ClassLoader arg1, JObject arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		) {}
	inline URLClassLoader::URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object()
		) {}
	inline URLClassLoader::URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2, JObject arg3)
		: java::security::SecureClassLoader(
			"java.net.URLClassLoader",
			"(Ljava/lang/String;[Ljava/net/URL;Ljava/lang/ClassLoader;Ljava/net/URLStreamHandlerFactory;)V",
			arg0.object<jstring>(),
			arg1.object<jarray>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline java::net::URLClassLoader URLClassLoader::newInstance(JArray arg0)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;)Ljava/net/URLClassLoader;",
			arg0.object<jarray>()
		);
	}
	inline java::net::URLClassLoader URLClassLoader::newInstance(JArray arg0, java::lang::ClassLoader arg1)
	{
		return callStaticObjectMethod(
			"java.net.URLClassLoader",
			"newInstance",
			"([Ljava/net/URL;Ljava/lang/ClassLoader;)Ljava/net/URLClassLoader;",
			arg0.object<jarray>(),
			arg1.object()
		);
	}
	inline void URLClassLoader::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline java::net::URL URLClassLoader::findResource(JString arg0) const
	{
		return callObjectMethod(
			"findResource",
			"(Ljava/lang/String;)Ljava/net/URL;",
			arg0.object<jstring>()
		);
	}
	inline JObject URLClassLoader::findResources(JString arg0) const
	{
		return callObjectMethod(
			"findResources",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0.object<jstring>()
		);
	}
	inline java::io::InputStream URLClassLoader::getResourceAsStream(JString arg0) const
	{
		return callObjectMethod(
			"getResourceAsStream",
			"(Ljava/lang/String;)Ljava/io/InputStream;",
			arg0.object<jstring>()
		);
	}
	inline JArray URLClassLoader::getURLs() const
	{
		return callObjectMethod(
			"getURLs",
			"()[Ljava/net/URL;"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/ClassLoader.hpp"
#include "../security/SecureClassLoader.hpp"

