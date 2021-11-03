#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit URLConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		URLConnection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jboolean getDefaultAllowUserInteraction();
		static jstring getDefaultRequestProperty(jstring arg0);
		static jboolean getDefaultUseCaches(jstring arg0);
		static JObject getFileNameMap();
		static jstring guessContentTypeFromName(jstring arg0);
		static jstring guessContentTypeFromStream(java::io::InputStream arg0);
		static void setContentHandlerFactory(JObject arg0);
		static void setDefaultAllowUserInteraction(jboolean arg0);
		static void setDefaultRequestProperty(jstring arg0, jstring arg1);
		static void setDefaultUseCaches(jstring arg0, jboolean arg1);
		static void setFileNameMap(JObject arg0);
		void addRequestProperty(jstring arg0, jstring arg1);
		void connect();
		jboolean getAllowUserInteraction();
		jint getConnectTimeout();
		jobject getContent();
		jobject getContent(jarray arg0);
		jstring getContentEncoding();
		jint getContentLength();
		jlong getContentLengthLong();
		jstring getContentType();
		jlong getDate();
		jboolean getDefaultUseCaches();
		jboolean getDoInput();
		jboolean getDoOutput();
		jlong getExpiration();
		jstring getHeaderField(jint arg0);
		jstring getHeaderField(jstring arg0);
		jlong getHeaderFieldDate(jstring arg0, jlong arg1);
		jint getHeaderFieldInt(jstring arg0, jint arg1);
		jstring getHeaderFieldKey(jint arg0);
		jlong getHeaderFieldLong(jstring arg0, jlong arg1);
		JObject getHeaderFields();
		jlong getIfModifiedSince();
		java::io::InputStream getInputStream();
		jlong getLastModified();
		java::io::OutputStream getOutputStream();
		java::security::Permission getPermission();
		jint getReadTimeout();
		JObject getRequestProperties();
		jstring getRequestProperty(jstring arg0);
		java::net::URL getURL();
		jboolean getUseCaches();
		void setAllowUserInteraction(jboolean arg0);
		void setConnectTimeout(jint arg0);
		void setDefaultUseCaches(jboolean arg0);
		void setDoInput(jboolean arg0);
		void setDoOutput(jboolean arg0);
		void setIfModifiedSince(jlong arg0);
		void setReadTimeout(jint arg0);
		void setRequestProperty(jstring arg0, jstring arg1);
		void setUseCaches(jboolean arg0);
		jstring toString();
	};
} // namespace java::net

