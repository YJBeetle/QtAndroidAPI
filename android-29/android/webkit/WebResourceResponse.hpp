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
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::java::io::InputStream arg2);
		void __constructor(jstring arg0, jstring arg1, jint arg2, jstring arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5);
		void __constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5);
		
		// Methods
		QAndroidJniObject getData();
		jstring getEncoding();
		jstring getMimeType();
		jstring getReasonPhrase();
		QAndroidJniObject getResponseHeaders();
		jint getStatusCode();
		void setData(__jni_impl::java::io::InputStream arg0);
		void setEncoding(jstring arg0);
		void setEncoding(const QString &arg0);
		void setMimeType(jstring arg0);
		void setMimeType(const QString &arg0);
		void setResponseHeaders(__jni_impl::__JniBaseClass arg0);
		void setStatusCodeAndReasonPhrase(jint arg0, jstring arg1);
		void setStatusCodeAndReasonPhrase(jint arg0, const QString &arg1);
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
			arg2.__jniObject().object()
		);
	}
	void WebResourceResponse::__constructor(const QString &arg0, const QString &arg1, __jni_impl::java::io::InputStream arg2)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/io/InputStream;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
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
			arg5.__jniObject().object()
		);
	}
	void WebResourceResponse::__constructor(const QString &arg0, const QString &arg1, jint arg2, const QString &arg3, __jni_impl::__JniBaseClass arg4, __jni_impl::java::io::InputStream arg5)
	{
		__thiz = QAndroidJniObject(
			"android.webkit.WebResourceResponse",
			"(Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/util/Map;Ljava/io/InputStream;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>(),
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
	void WebResourceResponse::setData(__jni_impl::java::io::InputStream arg0)
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
	void WebResourceResponse::setEncoding(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void WebResourceResponse::setMimeType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setMimeType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void WebResourceResponse::setResponseHeaders(__jni_impl::__JniBaseClass arg0)
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
	void WebResourceResponse::setStatusCodeAndReasonPhrase(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setStatusCodeAndReasonPhrase",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
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

