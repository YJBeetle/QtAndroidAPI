#include "../../java/io/InputStream.hpp"
#include "./WebResourceResponse.hpp"

namespace android::webkit
{
	// Fields
	
	WebResourceResponse::WebResourceResponse(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WebResourceResponse::WebResourceResponse(jstring arg0, jstring arg1, java::io::InputStream arg2)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	WebResourceResponse::WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, __JniBaseClass arg4, java::io::InputStream arg5)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/util/Map;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WebResourceResponse::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/io/InputStream;"
		);
	}
	jstring WebResourceResponse::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebResourceResponse::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebResourceResponse::getReasonPhrase()
	{
		return __thiz.callObjectMethod(
			"getReasonPhrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebResourceResponse::getResponseHeaders()
	{
		return __thiz.callObjectMethod(
			"getResponseHeaders",
			"()Ljava/util/Map;"
		);
	}
	jint WebResourceResponse::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	void WebResourceResponse::setData(java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setData",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void WebResourceResponse::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebResourceResponse::setMimeType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebResourceResponse::setResponseHeaders(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setResponseHeaders",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void WebResourceResponse::setStatusCodeAndReasonPhrase(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setStatusCodeAndReasonPhrase",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::webkit

