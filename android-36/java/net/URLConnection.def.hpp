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
		URLConnection(QJniObject obj) : JObject(obj) {}
		
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
		void addRequestProperty(JString arg0, JString arg1) const;
		void connect() const;
		jboolean getAllowUserInteraction() const;
		jint getConnectTimeout() const;
		JObject getContent() const;
		JObject getContent(JArray arg0) const;
		JString getContentEncoding() const;
		jint getContentLength() const;
		jlong getContentLengthLong() const;
		JString getContentType() const;
		jlong getDate() const;
		jboolean getDefaultUseCaches() const;
		jboolean getDoInput() const;
		jboolean getDoOutput() const;
		jlong getExpiration() const;
		JString getHeaderField(jint arg0) const;
		JString getHeaderField(JString arg0) const;
		jlong getHeaderFieldDate(JString arg0, jlong arg1) const;
		jint getHeaderFieldInt(JString arg0, jint arg1) const;
		JString getHeaderFieldKey(jint arg0) const;
		jlong getHeaderFieldLong(JString arg0, jlong arg1) const;
		JObject getHeaderFields() const;
		jlong getIfModifiedSince() const;
		java::io::InputStream getInputStream() const;
		jlong getLastModified() const;
		java::io::OutputStream getOutputStream() const;
		java::security::Permission getPermission() const;
		jint getReadTimeout() const;
		JObject getRequestProperties() const;
		JString getRequestProperty(JString arg0) const;
		java::net::URL getURL() const;
		jboolean getUseCaches() const;
		void setAllowUserInteraction(jboolean arg0) const;
		void setConnectTimeout(jint arg0) const;
		void setDefaultUseCaches(jboolean arg0) const;
		void setDoInput(jboolean arg0) const;
		void setDoOutput(jboolean arg0) const;
		void setIfModifiedSince(jlong arg0) const;
		void setReadTimeout(jint arg0) const;
		void setRequestProperty(JString arg0, JString arg1) const;
		void setUseCaches(jboolean arg0) const;
		JString toString() const;
	};
} // namespace java::net

