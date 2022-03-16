#pragma once

#include "./URLConnection.hpp"

class JArray;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit JarURLConnection(const char *className, const char *sig, Ts...agv) : java::net::URLConnection(className, sig, std::forward<Ts>(agv)...) {}
		JarURLConnection(QAndroidJniObject obj) : java::net::URLConnection(obj) {}
		
		// Constructors
		
		// Methods
		java::util::jar::Attributes getAttributes() const;
		JArray getCertificates() const;
		JString getEntryName() const;
		java::util::jar::JarEntry getJarEntry() const;
		java::util::jar::JarFile getJarFile() const;
		java::net::URL getJarFileURL() const;
		java::util::jar::Attributes getMainAttributes() const;
		java::util::jar::Manifest getManifest() const;
	};
} // namespace java::net

