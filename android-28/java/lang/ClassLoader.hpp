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
		ClassLoader(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::ClassLoader getPlatformClassLoader();
		static java::lang::ClassLoader getSystemClassLoader();
		static java::net::URL getSystemResource(JString arg0);
		static java::io::InputStream getSystemResourceAsStream(JString arg0);
		static JObject getSystemResources(JString arg0);
		void clearAssertionStatus();
		java::lang::Package getDefinedPackage(JString arg0);
		JArray getDefinedPackages();
		JString getName();
		java::lang::ClassLoader getParent();
		java::net::URL getResource(JString arg0);
		java::io::InputStream getResourceAsStream(JString arg0);
		JObject getResources(JString arg0);
		JObject getUnnamedModule();
		jboolean isRegisteredAsParallelCapable();
		JClass loadClass(JString arg0);
		JObject resources(JString arg0);
		void setClassAssertionStatus(JString arg0, jboolean arg1);
		void setDefaultAssertionStatus(jboolean arg0);
		void setPackageAssertionStatus(JString arg0, jboolean arg1);
	};
} // namespace java::lang

