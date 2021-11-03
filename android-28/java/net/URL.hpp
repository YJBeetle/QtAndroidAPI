#pragma once

#include "../../JObject.hpp"

class JArray;
class JArray;
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
class JObject;
namespace java::lang
{
	class SecurityManager;
}
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URL(QAndroidJniObject obj);
		
		// Constructors
		URL(JString arg0);
		URL(java::net::URL &arg0, JString arg1);
		URL(JString arg0, JString arg1, JString arg2);
		URL(java::net::URL &arg0, JString arg1, java::net::URLStreamHandler arg2);
		URL(JString arg0, JString arg1, jint arg2, JString arg3);
		URL(JString arg0, JString arg1, jint arg2, JString arg3, java::net::URLStreamHandler arg4);
		
		// Methods
		static void setURLStreamHandlerFactory(JObject arg0);
		jboolean equals(JObject arg0) const;
		JString getAuthority() const;
		JObject getContent() const;
		JObject getContent(JArray arg0) const;
		jint getDefaultPort() const;
		JString getFile() const;
		JString getHost() const;
		JString getPath() const;
		jint getPort() const;
		JString getProtocol() const;
		JString getQuery() const;
		JString getRef() const;
		JString getUserInfo() const;
		jint hashCode() const;
		java::net::URLConnection openConnection() const;
		java::net::URLConnection openConnection(java::net::Proxy arg0) const;
		java::io::InputStream openStream() const;
		jboolean sameFile(java::net::URL arg0) const;
		JString toExternalForm() const;
		JString toString() const;
		java::net::URI toURI() const;
	};
} // namespace java::net

