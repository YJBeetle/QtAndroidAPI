#include "./URL.hpp"
#include "./URLConnection.hpp"
#include "../util/jar/Attributes.hpp"
#include "../util/jar/JarEntry.hpp"
#include "../util/jar/JarFile.hpp"
#include "../util/jar/Manifest.hpp"
#include "./JarURLConnection.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	JarURLConnection::JarURLConnection(QJniObject obj) : java::net::URLConnection(obj) {}
	
	// Constructors
	
	// Methods
	java::util::jar::Attributes JarURLConnection::getAttributes()
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jarray JarURLConnection::getCertificates()
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jstring JarURLConnection::getEntryName()
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::util::jar::JarEntry JarURLConnection::getJarEntry()
	{
		return callObjectMethod(
			"getJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	java::util::jar::JarFile JarURLConnection::getJarFile()
	{
		return callObjectMethod(
			"getJarFile",
			"()Ljava/util/jar/JarFile;"
		);
	}
	java::net::URL JarURLConnection::getJarFileURL()
	{
		return callObjectMethod(
			"getJarFileURL",
			"()Ljava/net/URL;"
		);
	}
	java::util::jar::Attributes JarURLConnection::getMainAttributes()
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	java::util::jar::Manifest JarURLConnection::getManifest()
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
} // namespace java::net

