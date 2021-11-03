#pragma once

#include "../../JObject.hpp"

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
	class URL : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URL(QJniObject obj);
		
		// Constructors
		URL(jstring arg0);
		URL(java::net::URL &arg0, jstring arg1);
		URL(jstring arg0, jstring arg1, jstring arg2);
		URL(java::net::URL &arg0, jstring arg1, java::net::URLStreamHandler arg2);
		URL(jstring arg0, jstring arg1, jint arg2, jstring arg3);
		URL(jstring arg0, jstring arg1, jint arg2, jstring arg3, java::net::URLStreamHandler arg4);
		
		// Methods
		static void setURLStreamHandlerFactory(JObject arg0);
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
		java::net::URLConnection openConnection();
		java::net::URLConnection openConnection(java::net::Proxy arg0);
		java::io::InputStream openStream();
		jboolean sameFile(java::net::URL arg0);
		jstring toExternalForm();
		jstring toString();
		java::net::URI toURI();
	};
} // namespace java::net

