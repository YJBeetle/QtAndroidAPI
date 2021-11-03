#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}

namespace android::webkit
{
	class WebResourceResponse : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebResourceResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceResponse(QAndroidJniObject obj);
		
		// Constructors
		WebResourceResponse(jstring arg0, jstring arg1, java::io::InputStream arg2);
		WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, JObject arg4, java::io::InputStream arg5);
		
		// Methods
		java::io::InputStream getData();
		jstring getEncoding();
		jstring getMimeType();
		jstring getReasonPhrase();
		JObject getResponseHeaders();
		jint getStatusCode();
		void setData(java::io::InputStream arg0);
		void setEncoding(jstring arg0);
		void setMimeType(jstring arg0);
		void setResponseHeaders(JObject arg0);
		void setStatusCodeAndReasonPhrase(jint arg0, jstring arg1);
	};
} // namespace android::webkit

