#include "../../JArray.hpp"
#include "../../JString.hpp"
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
	java::util::jar::Attributes JarURLConnection::getAttributes() const
	{
		return callObjectMethod(
			"getAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	JArray JarURLConnection::getCertificates() const
	{
		return callObjectMethod(
			"getCertificates",
			"()[Ljava/security/cert/Certificate;"
		);
	}
	JString JarURLConnection::getEntryName() const
	{
		return callObjectMethod(
			"getEntryName",
			"()Ljava/lang/String;"
		);
	}
	java::util::jar::JarEntry JarURLConnection::getJarEntry() const
	{
		return callObjectMethod(
			"getJarEntry",
			"()Ljava/util/jar/JarEntry;"
		);
	}
	java::util::jar::JarFile JarURLConnection::getJarFile() const
	{
		return callObjectMethod(
			"getJarFile",
			"()Ljava/util/jar/JarFile;"
		);
	}
	java::net::URL JarURLConnection::getJarFileURL() const
	{
		return callObjectMethod(
			"getJarFileURL",
			"()Ljava/net/URL;"
		);
	}
	java::util::jar::Attributes JarURLConnection::getMainAttributes() const
	{
		return callObjectMethod(
			"getMainAttributes",
			"()Ljava/util/jar/Attributes;"
		);
	}
	java::util::jar::Manifest JarURLConnection::getManifest() const
	{
		return callObjectMethod(
			"getManifest",
			"()Ljava/util/jar/Manifest;"
		);
	}
} // namespace java::net

