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
	
	// QAndroidJniObject forward
	JarURLConnection::JarURLConnection(QAndroidJniObject obj) : java::net::URLConnection(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject JarURLConnection::getAttributes()
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
	QAndroidJniObject JarURLConnection::getJarEntry()
	{
		return callObjectMethod(
			"getJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	QAndroidJniObject JarURLConnection::getJarFile()
	{
		return callObjectMethod(
			"getJarFile",
			"()Ljava/util/jar/JarFile;"
		);
	}
	QAndroidJniObject JarURLConnection::getJarFileURL()
	{
		return callObjectMethod(
			"getJarFileURL",
			"()Ljava/net/URL;"
		);
	}
	QAndroidJniObject JarURLConnection::getMainAttributes()
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	QAndroidJniObject JarURLConnection::getManifest()
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
} // namespace java::net

