#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObjectArray;
class JArray;
class JArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
class JClass;
class JObject;
namespace java::lang
{
	class Package;
}
class JString;
namespace java::lang
{
	class Void;
}
namespace java::net
{
	class URL;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::security
{
	class CodeSource;
}
namespace java::security
{
	class ProtectionDomain;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::lang
{
	class ClassLoader : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ClassLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClassLoader(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::lang::ClassLoader getPlatformClassLoader();
		static java::lang::ClassLoader getSystemClassLoader();
		static java::net::URL getSystemResource(JString arg0);
		static java::io::InputStream getSystemResourceAsStream(JString arg0);
		static JObject getSystemResources(JString arg0);
		void clearAssertionStatus() const;
		java::lang::Package getDefinedPackage(JString arg0) const;
		JArray getDefinedPackages() const;
		JString getName() const;
		java::lang::ClassLoader getParent() const;
		java::net::URL getResource(JString arg0) const;
		java::io::InputStream getResourceAsStream(JString arg0) const;
		JObject getResources(JString arg0) const;
		JObject getUnnamedModule() const;
		jboolean isRegisteredAsParallelCapable() const;
		JClass loadClass(JString arg0) const;
		JObject resources(JString arg0) const;
		void setClassAssertionStatus(JString arg0, jboolean arg1) const;
		void setDefaultAssertionStatus(jboolean arg0) const;
		void setPackageAssertionStatus(JString arg0, jboolean arg1) const;
	};
} // namespace java::lang

