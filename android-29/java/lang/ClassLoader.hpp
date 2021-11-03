#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::lang
{
	class Package;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClassLoader(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClassLoader(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::ClassLoader getPlatformClassLoader();
		static java::lang::ClassLoader getSystemClassLoader();
		static java::net::URL getSystemResource(jstring arg0);
		static java::io::InputStream getSystemResourceAsStream(jstring arg0);
		static JObject getSystemResources(jstring arg0);
		void clearAssertionStatus();
		java::lang::Package getDefinedPackage(jstring arg0);
		jarray getDefinedPackages();
		jstring getName();
		java::lang::ClassLoader getParent();
		java::net::URL getResource(jstring arg0);
		java::io::InputStream getResourceAsStream(jstring arg0);
		JObject getResources(jstring arg0);
		JObject getUnnamedModule();
		jboolean isRegisteredAsParallelCapable();
		jclass loadClass(jstring arg0);
		JObject resources(jstring arg0);
		void setClassAssertionStatus(jstring arg0, jboolean arg1);
		void setDefaultAssertionStatus(jboolean arg0);
		void setPackageAssertionStatus(jstring arg0, jboolean arg1);
	};
} // namespace java::lang

