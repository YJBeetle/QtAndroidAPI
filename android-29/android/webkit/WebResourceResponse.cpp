#include "../../java/io/InputStream.hpp"
#include "./WebResourceResponse.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	WebResourceResponse::WebResourceResponse(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WebResourceResponse::WebResourceResponse(jstring arg0, jstring arg1, java::io::InputStream arg2)
		: __JniBaseClass(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	WebResourceResponse::WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, __JniBaseClass arg4, java::io::InputStream arg5)
		: __JniBaseClass(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/util/Map;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.object(),
			arg5.object()
		) {}
	
	// Methods
	QAndroidJniObject WebResourceResponse::getData()
	{
		return callObjectMethod(
			"getData",
			"()Ljava/io/InputStream;"
		);
	}
	jstring WebResourceResponse::getEncoding()
	{
		return callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebResourceResponse::getMimeType()
	{
		return callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WebResourceResponse::getReasonPhrase()
	{
		return callObjectMethod(
			"getReasonPhrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject WebResourceResponse::getResponseHeaders()
	{
		return callObjectMethod(
			"getResponseHeaders",
			"()Ljava/util/Map;"
		);
	}
	jint WebResourceResponse::getStatusCode()
	{
		return callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	void WebResourceResponse::setData(java::io::InputStream arg0)
	{
		callMethod<void>(
			"setData",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	void WebResourceResponse::setEncoding(jstring arg0)
	{
		callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebResourceResponse::setMimeType(jstring arg0)
	{
		callMethod<void>(
			"setMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void WebResourceResponse::setResponseHeaders(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setResponseHeaders",
			"(Ljava/util/Map;)V",
			arg0.object()
		);
	}
	void WebResourceResponse::setStatusCodeAndReasonPhrase(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setStatusCodeAndReasonPhrase",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace android::webkit

