#pragma once

#ifndef JAVA_NET_JARURLCONNECTION
#define JAVA_NET_JARURLCONNECTION

#include "../../__JniBaseClass.hpp"
#include "URLConnection.hpp"

namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::net
{
	class URLConnection;
}
namespace __jni_impl::java::util::jar
{
	class Attributes;
}
namespace __jni_impl::java::util::jar
{
	class JarEntry;
}
namespace __jni_impl::java::util::jar
{
	class JarFile;
}
namespace __jni_impl::java::util::jar
{
	class Manifest;
}

namespace __jni_impl::java::net
{
	class JarURLConnection : public __jni_impl::java::net::URLConnection
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
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
} // namespace __jni_impl::java::net

#include "URL.hpp"
#include "URLConnection.hpp"
#include "../util/jar/Attributes.hpp"
#include "../util/jar/JarEntry.hpp"
#include "../util/jar/JarFile.hpp"
#include "../util/jar/Manifest.hpp"

namespace __jni_impl::java::net
{
	// Fields
	
	// Constructors
	void JarURLConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.JarURLConnection",
			"(V)V");
	}
	
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
} // namespace __jni_impl::java::net

namespace java::net
{
	class JarURLConnection : public __jni_impl::java::net::JarURLConnection
	{
	public:
		JarURLConnection(QAndroidJniObject obj) { __thiz = obj; }
		JarURLConnection()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_JARURLCONNECTION

