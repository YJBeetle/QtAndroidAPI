#pragma once

#include "../security/SecureClassLoader.def.hpp"

class JArray;
namespace java::io
{
	class InputStream;
}
class JClass;
namespace java::lang
{
	class ClassLoader;
}
namespace java::lang
{
	class Package;
}
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLClassLoader(const char *className, const char *sig, Ts...agv) : java::security::SecureClassLoader(className, sig, std::forward<Ts>(agv)...) {}
		URLClassLoader(QAndroidJniObject obj) : java::security::SecureClassLoader(obj) {}
		
		// Constructors
		URLClassLoader(JArray arg0);
		URLClassLoader(JArray arg0, java::lang::ClassLoader arg1);
		URLClassLoader(JArray arg0, java::lang::ClassLoader arg1, JObject arg2);
		URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2);
		URLClassLoader(JString arg0, JArray arg1, java::lang::ClassLoader arg2, JObject arg3);
		
		// Methods
		static java::net::URLClassLoader newInstance(JArray arg0);
		static java::net::URLClassLoader newInstance(JArray arg0, java::lang::ClassLoader arg1);
		void close() const;
		java::net::URL findResource(JString arg0) const;
		JObject findResources(JString arg0) const;
		java::io::InputStream getResourceAsStream(JString arg0) const;
		JArray getURLs() const;
	};
} // namespace java::net

