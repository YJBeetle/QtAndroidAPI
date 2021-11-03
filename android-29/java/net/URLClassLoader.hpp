#pragma once

#include "../../JObject.hpp"
#include "../lang/ClassLoader.hpp"
#include "../security/SecureClassLoader.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Package;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class AccessControlContext;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class PermissionCollection;
}
namespace java::util
{
	class WeakHashMap;
}
namespace java::util::jar
{
	class Manifest;
}

namespace java::net
{
	class URLClassLoader : public java::security::SecureClassLoader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLClassLoader(const char *className, const char *sig, Ts...agv) : java::security::SecureClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		URLClassLoader(QJniObject obj);
		
		// Constructors
		URLClassLoader(jarray arg0);
		URLClassLoader(jarray arg0, java::lang::ClassLoader arg1);
		URLClassLoader(jarray arg0, java::lang::ClassLoader arg1, JObject arg2);
		URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2);
		URLClassLoader(jstring arg0, jarray arg1, java::lang::ClassLoader arg2, JObject arg3);
		
		// Methods
		static java::net::URLClassLoader newInstance(jarray arg0);
		static java::net::URLClassLoader newInstance(jarray arg0, java::lang::ClassLoader arg1);
		void close();
		java::net::URL findResource(jstring arg0);
		JObject findResources(jstring arg0);
		java::io::InputStream getResourceAsStream(jstring arg0);
		jarray getURLs();
	};
} // namespace java::net

