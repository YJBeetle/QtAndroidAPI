#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
class JString;

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
		WebResourceResponse(JString arg0, JString arg1, java::io::InputStream arg2);
		WebResourceResponse(JString arg0, JString arg1, jint arg2, JString arg3, JObject arg4, java::io::InputStream arg5);
		
		// Methods
		java::io::InputStream getData() const;
		JString getEncoding() const;
		JString getMimeType() const;
		JString getReasonPhrase() const;
		JObject getResponseHeaders() const;
		jint getStatusCode() const;
		void setData(java::io::InputStream arg0) const;
		void setEncoding(JString arg0) const;
		void setMimeType(JString arg0) const;
		void setResponseHeaders(JObject arg0) const;
		void setStatusCodeAndReasonPhrase(jint arg0, JString arg1) const;
	};
} // namespace android::webkit

