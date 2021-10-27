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
	
	JarURLConnection::JarURLConnection(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject JarURLConnection::getAttributes()
	{
		return __thiz.callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	jarray JarURLConnection::getCertificates()
	{
		return __thiz.callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		).object<jarray>();
	}
	jstring JarURLConnection::getEntryName()
	{
		return __thiz.callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject JarURLConnection::getJarEntry()
	{
		return __thiz.callObjectMethod(
			"getJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	QAndroidJniObject JarURLConnection::getJarFile()
	{
		return __thiz.callObjectMethod(
			"getJarFile",
			"()Ljava/util/jar/JarFile;"
		);
	}
	QAndroidJniObject JarURLConnection::getJarFileURL()
	{
		return __thiz.callObjectMethod(
			"getJarFileURL",
			"()Ljava/net/URL;"
		);
	}
	QAndroidJniObject JarURLConnection::getMainAttributes()
	{
		return __thiz.callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	QAndroidJniObject JarURLConnection::getManifest()
	{
		return __thiz.callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
} // namespace java::net

