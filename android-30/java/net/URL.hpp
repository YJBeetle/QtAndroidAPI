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
		
		// QJniObject forward
		template<typename ...Ts> explicit URL(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URL(QJniObject obj);
		
		// Constructors
		URL(JString arg0);
		URL(java::net::URL &arg0, JString arg1);
		URL(JString arg0, JString arg1, JString arg2);
		URL(java::net::URL &arg0, JString arg1, java::net::URLStreamHandler arg2);
		URL(JString arg0, JString arg1, jint arg2, JString arg3);
		URL(JString arg0, JString arg1, jint arg2, JString arg3, java::net::URLStreamHandler arg4);
		
		// Methods
		static void setURLStreamHandlerFactory(JObject arg0);
		jboolean equals(JObject arg0);
		JString getAuthority();
		JObject getContent();
		JObject getContent(JArray arg0);
		jint getDefaultPort();
		JString getFile();
		JString getHost();
		JString getPath();
		jint getPort();
		JString getProtocol();
		JString getQuery();
		JString getRef();
		JString getUserInfo();
		jint hashCode();
		java::net::URLConnection openConnection();
		java::net::URLConnection openConnection(java::net::Proxy arg0);
		java::io::InputStream openStream();
		jboolean sameFile(java::net::URL arg0);
		JString toExternalForm();
		JString toString();
		java::net::URI toURI();
	};
} // namespace java::net

