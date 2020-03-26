#pragma once

#ifndef ANDROID_WEBKIT_WEBRESOURCERESPONSE
#define ANDROID_WEBKIT_WEBRESOURCERESPONSE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::webkit
{
	class WebResourceResponse : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::io::InputStream arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5);
		
		// Methods
		jstring getEncoding();
		void setEncoding(jstring arg0);
		QAndroidJniObject getData();
		void setData(__jni_impl::java::io::InputStream arg0);
		void setMimeType(jstring arg0);
		jstring getMimeType();
		void setStatusCodeAndReasonPhrase(jint arg0, jstring arg1);
		jint getStatusCode();
		jstring getReasonPhrase();
		void setResponseHeaders(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getResponseHeaders();
	};
} // namespace __jni_impl::android::webkit

#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::webkit
{
	// Fields
	
	// Constructors
	void WebResourceResponse::__constructor(jstring arg0, jstring arg1, __jni_impl::java::io::InputStream arg2)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	void WebResourceResponse::__constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/util/Map;Ljava/io/InputStream;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object(),
			arg5.__jniObject().object());
	}
	
	// Methods
	jstring WebResourceResponse::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WebResourceResponse::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QAndroidJniObject WebResourceResponse::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()Ljava/io/InputStream;"
		);
	}
	void WebResourceResponse::setData(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setData",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
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
	jstring WebResourceResponse::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jint WebResourceResponse::getStatusCode()
	{
		return __thiz.callMethod<jint>(
			"getStatusCode",
			"()I"
		);
	}
	jstring WebResourceResponse::getReasonPhrase()
	{
		return __thiz.callObjectMethod(
			"getReasonPhrase",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WebResourceResponse::setResponseHeaders(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setResponseHeaders",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WebResourceResponse::getResponseHeaders()
	{
		return __thiz.callObjectMethod(
			"getResponseHeaders",
			"()Ljava/util/Map;"
		);
	}
} // namespace __jni_impl::android::webkit

namespace android::webkit
{
	class WebResourceResponse : public __jni_impl::android::webkit::WebResourceResponse
	{
	public:
		WebResourceResponse(QAndroidJniObject obj) { __thiz = obj; }
		WebResourceResponse(jstring arg0, jstring arg1, __jni_impl::java::io::InputStream arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		WebResourceResponse(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::webkit

#endif // ANDROID_WEBKIT_WEBRESOURCERESPONSE

