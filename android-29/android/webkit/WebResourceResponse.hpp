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
		
		// QJniObject forward
		template<typename ...Ts> explicit WebResourceResponse(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceResponse(QJniObject obj);
		
		// Constructors
		WebResourceResponse(JString arg0, JString arg1, java::io::InputStream arg2);
		WebResourceResponse(JString arg0, JString arg1, jint arg2, JString arg3, JObject arg4, java::io::InputStream arg5);
		
		// Methods
		java::io::InputStream getData();
		JString getEncoding();
		JString getMimeType();
		JString getReasonPhrase();
		JObject getResponseHeaders();
		jint getStatusCode();
		void setData(java::io::InputStream arg0);
		void setEncoding(JString arg0);
		void setMimeType(JString arg0);
		void setResponseHeaders(JObject arg0);
		void setStatusCodeAndReasonPhrase(jint arg0, JString arg1);
	};
} // namespace android::webkit

