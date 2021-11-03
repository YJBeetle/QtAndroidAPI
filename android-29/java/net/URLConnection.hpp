#pragma once

#include "../../JObject.hpp"

class JIntArray;
class JArray;
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
namespace java::net
{
	class ContentHandler;
}
namespace java::net
{
	class URL;
}
namespace java::security
{
	class Permission;
}
namespace java::util
{
	class Hashtable;
}
namespace java::util::concurrent
{
	class ConcurrentHashMap;
}

namespace java::net
{
	class URLConnection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit URLConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLConnection(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean getDefaultAllowUserInteraction();
		static JString getDefaultRequestProperty(JString arg0);
		static jboolean getDefaultUseCaches(JString arg0);
		static JObject getFileNameMap();
		static JString guessContentTypeFromName(JString arg0);
		static JString guessContentTypeFromStream(java::io::InputStream arg0);
		static void setContentHandlerFactory(JObject arg0);
		static void setDefaultAllowUserInteraction(jboolean arg0);
		static void setDefaultRequestProperty(JString arg0, JString arg1);
		static void setDefaultUseCaches(JString arg0, jboolean arg1);
		static void setFileNameMap(JObject arg0);
		void addRequestProperty(JString arg0, JString arg1);
		void connect();
		jboolean getAllowUserInteraction();
		jint getConnectTimeout();
		JObject getContent();
		JObject getContent(JArray arg0);
		JString getContentEncoding();
		jint getContentLength();
		jlong getContentLengthLong();
		JString getContentType();
		jlong getDate();
		jboolean getDefaultUseCaches();
		jboolean getDoInput();
		jboolean getDoOutput();
		jlong getExpiration();
		JString getHeaderField(jint arg0);
		JString getHeaderField(JString arg0);
		jlong getHeaderFieldDate(JString arg0, jlong arg1);
		jint getHeaderFieldInt(JString arg0, jint arg1);
		JString getHeaderFieldKey(jint arg0);
		jlong getHeaderFieldLong(JString arg0, jlong arg1);
		JObject getHeaderFields();
		jlong getIfModifiedSince();
		java::io::InputStream getInputStream();
		jlong getLastModified();
		java::io::OutputStream getOutputStream();
		java::security::Permission getPermission();
		jint getReadTimeout();
		JObject getRequestProperties();
		JString getRequestProperty(JString arg0);
		java::net::URL getURL();
		jboolean getUseCaches();
		void setAllowUserInteraction(jboolean arg0);
		void setConnectTimeout(jint arg0);
		void setDefaultUseCaches(jboolean arg0);
		void setDoInput(jboolean arg0);
		void setDoOutput(jboolean arg0);
		void setIfModifiedSince(jlong arg0);
		void setReadTimeout(jint arg0);
		void setRequestProperty(JString arg0, JString arg1);
		void setUseCaches(jboolean arg0);
		JString toString();
	};
} // namespace java::net

