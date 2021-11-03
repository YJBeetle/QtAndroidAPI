#pragma once

#include "../../JObject.hpp"
#include "./URLConnection.hpp"

namespace java::net
{
	class URL;
}
namespace java::net
{
	class URLConnection;
}
namespace java::util::jar
{
	class Attributes;
}
namespace java::util::jar
{
	class JarEntry;
}
namespace java::util::jar
{
	class JarFile;
}
namespace java::util::jar
{
	class Manifest;
}

namespace java::net
{
	class JarURLConnection : public java::net::URLConnection
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit JarURLConnection(const char *className, const char *sig, Ts...agv) : java::net::URLConnection(className, sig, std::forward<Ts>(agv)...) {}
		JarURLConnection(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::util::jar::Attributes getAttributes();
		jarray getCertificates();
		jstring getEntryName();
		java::util::jar::JarEntry getJarEntry();
		java::util::jar::JarFile getJarFile();
		java::net::URL getJarFileURL();
		java::util::jar::Attributes getMainAttributes();
		java::util::jar::Manifest getManifest();
	};
} // namespace java::net

