#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}

namespace android::webkit
{
	class WebResourceResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WebResourceResponse(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WebResourceResponse(QAndroidJniObject obj);
		
		// Constructors
		WebResourceResponse(jstring arg0, jstring arg1, java::io::InputStream arg2);
		WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, __JniBaseClass arg4, java::io::InputStream arg5);
		
		// Methods
		java::io::InputStream getData();
		jstring getEncoding();
		jstring getMimeType();
		jstring getReasonPhrase();
		__JniBaseClass getResponseHeaders();
		jint getStatusCode();
		void setData(java::io::InputStream arg0);
		void setEncoding(jstring arg0);
		void setMimeType(jstring arg0);
		void setResponseHeaders(__JniBaseClass arg0);
		void setStatusCodeAndReasonPhrase(jint arg0, jstring arg1);
	};
} // namespace android::webkit

