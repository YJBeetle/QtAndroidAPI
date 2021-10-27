#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class ObjectInputStream;
}
namespace java::io
{
	class ObjectOutputStream;
}
namespace java::lang
{
	class SecurityManager;
}
namespace java::lang
{
	class ThreadLocal;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Proxy;
}
namespace java::net
{
	class URI;
}
namespace java::net
{
	class URLConnection;
}
namespace java::net
{
	class URLStreamHandler;
}
namespace java::util
{
	class Hashtable;
}

namespace java::net
{
	class URL : public __JniBaseClass
	{
	public:
		// Fields
		
		URL(QAndroidJniObject obj);
		// Constructors
		URL(jstring &arg0);
		URL(const QString &arg0);
		URL(java::net::URL &arg0, jstring &arg1);
		URL(java::net::URL &arg0, const QString &arg1);
		URL(jstring &arg0, jstring &arg1, jstring &arg2);
		URL(const QString &arg0, const QString &arg1, const QString &arg2);
		URL(java::net::URL &arg0, jstring &arg1, java::net::URLStreamHandler &arg2);
		URL(java::net::URL &arg0, const QString &arg1, java::net::URLStreamHandler &arg2);
		URL(jstring &arg0, jstring &arg1, jint &arg2, jstring &arg3);
		URL(const QString &arg0, const QString &arg1, jint &arg2, const QString &arg3);
		URL(jstring &arg0, jstring &arg1, jint &arg2, jstring &arg3, java::net::URLStreamHandler &arg4);
		URL(const QString &arg0, const QString &arg1, jint &arg2, const QString &arg3, java::net::URLStreamHandler &arg4);
		URL() = default;
		
		// Methods
		static void setURLStreamHandlerFactory(__JniBaseClass arg0);
		jboolean equals(jobject arg0);
		jstring getAuthority();
		jobject getContent();
		jobject getContent(jarray arg0);
		jint getDefaultPort();
		jstring getFile();
		jstring getHost();
		jstring getPath();
		jint getPort();
		jstring getProtocol();
		jstring getQuery();
		jstring getRef();
		jstring getUserInfo();
		jint hashCode();
		QAndroidJniObject openConnection();
		QAndroidJniObject openConnection(java::net::Proxy arg0);
		QAndroidJniObject openStream();
		jboolean sameFile(java::net::URL arg0);
		jstring toExternalForm();
		jstring toString();
		QAndroidJniObject toURI();
	};
} // namespace java::net

