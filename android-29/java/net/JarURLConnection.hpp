#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		JarURLConnection(QAndroidJniObject obj);
		// Constructors
		JarURLConnection() = default;
		
		// Methods
		QAndroidJniObject getAttributes();
		jarray getCertificates();
		jstring getEntryName();
		QAndroidJniObject getJarEntry();
		QAndroidJniObject getJarFile();
		QAndroidJniObject getJarFileURL();
		QAndroidJniObject getMainAttributes();
		QAndroidJniObject getManifest();
	};
} // namespace java::net

