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
		
		WebResourceResponse(QAndroidJniObject obj);
		// Constructors
		WebResourceResponse(jstring arg0, jstring arg1, java::io::InputStream arg2);
		WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, __JniBaseClass arg4, java::io::InputStream arg5);
		WebResourceResponse() = default;
		
		// Methods
		QAndroidJniObject getData();
		jstring getEncoding();
		jstring getMimeType();
		jstring getReasonPhrase();
		QAndroidJniObject getResponseHeaders();
		jint getStatusCode();
		void setData(java::io::InputStream arg0);
		void setEncoding(jstring arg0);
		void setMimeType(jstring arg0);
		void setResponseHeaders(__JniBaseClass arg0);
		void setStatusCodeAndReasonPhrase(jint arg0, jstring arg1);
	};
} // namespace android::webkit

