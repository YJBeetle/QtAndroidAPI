#pragma once

#ifndef JAVA_NET_HTTPURLCONNECTION
#define JAVA_NET_HTTPURLCONNECTION

#include "../../__JniBaseClass.hpp"
#include "URLConnection.hpp"

namespace __jni_impl::java::net
{
	class URL;
}
namespace __jni_impl::java::security
{
	class Permission;
}
namespace __jni_impl::java::net
{
	class Authenticator;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::java::net
{
	class HttpURLConnection : public __jni_impl::java::net::URLConnection
	{
	public:
		// Fields
		static jint HTTP_OK();
		static jint HTTP_CREATED();
		static jint HTTP_ACCEPTED();
		static jint HTTP_NOT_AUTHORITATIVE();
		static jint HTTP_NO_CONTENT();
		static jint HTTP_RESET();
		static jint HTTP_PARTIAL();
		static jint HTTP_MULT_CHOICE();
		static jint HTTP_MOVED_PERM();
		static jint HTTP_MOVED_TEMP();
		static jint HTTP_SEE_OTHER();
		static jint HTTP_NOT_MODIFIED();
		static jint HTTP_USE_PROXY();
		static jint HTTP_BAD_REQUEST();
		static jint HTTP_UNAUTHORIZED();
		static jint HTTP_PAYMENT_REQUIRED();
		static jint HTTP_FORBIDDEN();
		static jint HTTP_NOT_FOUND();
		static jint HTTP_BAD_METHOD();
		static jint HTTP_NOT_ACCEPTABLE();
		static jint HTTP_PROXY_AUTH();
		static jint HTTP_CLIENT_TIMEOUT();
		static jint HTTP_CONFLICT();
		static jint HTTP_GONE();
		static jint HTTP_LENGTH_REQUIRED();
		static jint HTTP_PRECON_FAILED();
		static jint HTTP_ENTITY_TOO_LARGE();
		static jint HTTP_REQ_TOO_LONG();
		static jint HTTP_UNSUPPORTED_TYPE();
		static jint HTTP_SERVER_ERROR();
		static jint HTTP_INTERNAL_ERROR();
		static jint HTTP_NOT_IMPLEMENTED();
		static jint HTTP_BAD_GATEWAY();
		static jint HTTP_UNAVAILABLE();
		static jint HTTP_GATEWAY_TIMEOUT();
		static jint HTTP_VERSION();
		
		// Constructors
		void __constructor();
		
		// Methods
		void setRequestMethod(jstring arg0);
		void setRequestMethod(const QString &arg0);
		jint getResponseCode();
		QAndroidJniObject getPermission();
		void disconnect();
		void setAuthenticator(__jni_impl::java::net::Authenticator arg0);
		void setFixedLengthStreamingMode(jlong arg0);
		void setFixedLengthStreamingMode(jint arg0);
		void setChunkedStreamingMode(jint arg0);
		static void setFollowRedirects(jboolean arg0);
		static jboolean getFollowRedirects();
		void setInstanceFollowRedirects(jboolean arg0);
		jboolean getInstanceFollowRedirects();
		jstring getRequestMethod();
		jstring getResponseMessage();
		jboolean usingProxy();
		jstring getHeaderField(jint arg0);
		jstring getHeaderFieldKey(jint arg0);
		jlong getHeaderFieldDate(jstring arg0, jlong arg1);
		jlong getHeaderFieldDate(const QString &arg0, jlong arg1);
		QAndroidJniObject getErrorStream();
	};
} // namespace __jni_impl::java::net

#include "URL.hpp"
#include "../security/Permission.hpp"
#include "Authenticator.hpp"
#include "../io/InputStream.hpp"

namespace __jni_impl::java::net
{
	// Fields
	jint HttpURLConnection::HTTP_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_OK"
		);
	}
	jint HttpURLConnection::HTTP_CREATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CREATED"
		);
	}
	jint HttpURLConnection::HTTP_ACCEPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ACCEPTED"
		);
	}
	jint HttpURLConnection::HTTP_NOT_AUTHORITATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_AUTHORITATIVE"
		);
	}
	jint HttpURLConnection::HTTP_NO_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NO_CONTENT"
		);
	}
	jint HttpURLConnection::HTTP_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_RESET"
		);
	}
	jint HttpURLConnection::HTTP_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PARTIAL"
		);
	}
	jint HttpURLConnection::HTTP_MULT_CHOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MULT_CHOICE"
		);
	}
	jint HttpURLConnection::HTTP_MOVED_PERM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_PERM"
		);
	}
	jint HttpURLConnection::HTTP_MOVED_TEMP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_TEMP"
		);
	}
	jint HttpURLConnection::HTTP_SEE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SEE_OTHER"
		);
	}
	jint HttpURLConnection::HTTP_NOT_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_MODIFIED"
		);
	}
	jint HttpURLConnection::HTTP_USE_PROXY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_USE_PROXY"
		);
	}
	jint HttpURLConnection::HTTP_BAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_REQUEST"
		);
	}
	jint HttpURLConnection::HTTP_UNAUTHORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAUTHORIZED"
		);
	}
	jint HttpURLConnection::HTTP_PAYMENT_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PAYMENT_REQUIRED"
		);
	}
	jint HttpURLConnection::HTTP_FORBIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_FORBIDDEN"
		);
	}
	jint HttpURLConnection::HTTP_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_FOUND"
		);
	}
	jint HttpURLConnection::HTTP_BAD_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_METHOD"
		);
	}
	jint HttpURLConnection::HTTP_NOT_ACCEPTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_ACCEPTABLE"
		);
	}
	jint HttpURLConnection::HTTP_PROXY_AUTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PROXY_AUTH"
		);
	}
	jint HttpURLConnection::HTTP_CLIENT_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CLIENT_TIMEOUT"
		);
	}
	jint HttpURLConnection::HTTP_CONFLICT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CONFLICT"
		);
	}
	jint HttpURLConnection::HTTP_GONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GONE"
		);
	}
	jint HttpURLConnection::HTTP_LENGTH_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_LENGTH_REQUIRED"
		);
	}
	jint HttpURLConnection::HTTP_PRECON_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PRECON_FAILED"
		);
	}
	jint HttpURLConnection::HTTP_ENTITY_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ENTITY_TOO_LARGE"
		);
	}
	jint HttpURLConnection::HTTP_REQ_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_REQ_TOO_LONG"
		);
	}
	jint HttpURLConnection::HTTP_UNSUPPORTED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNSUPPORTED_TYPE"
		);
	}
	jint HttpURLConnection::HTTP_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SERVER_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_INTERNAL_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_NOT_IMPLEMENTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_IMPLEMENTED"
		);
	}
	jint HttpURLConnection::HTTP_BAD_GATEWAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_GATEWAY"
		);
	}
	jint HttpURLConnection::HTTP_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAVAILABLE"
		);
	}
	jint HttpURLConnection::HTTP_GATEWAY_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GATEWAY_TIMEOUT"
		);
	}
	jint HttpURLConnection::HTTP_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_VERSION"
		);
	}
	
	// Constructors
	void HttpURLConnection::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.HttpURLConnection",
			"(V)V");
	}
	
	// Methods
	void HttpURLConnection::setRequestMethod(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setRequestMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void HttpURLConnection::setRequestMethod(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setRequestMethod",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint HttpURLConnection::getResponseCode()
	{
		return __thiz.callMethod<jint>(
			"getResponseCode",
			"()I"
		);
	}
	QAndroidJniObject HttpURLConnection::getPermission()
	{
		return __thiz.callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	void HttpURLConnection::disconnect()
	{
		__thiz.callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	void HttpURLConnection::setAuthenticator(__jni_impl::java::net::Authenticator arg0)
	{
		__thiz.callMethod<void>(
			"setAuthenticator",
			"(Ljava/net/Authenticator;)V",
			arg0.__jniObject().object()
		);
	}
	void HttpURLConnection::setFixedLengthStreamingMode(jlong arg0)
	{
		__thiz.callMethod<void>(
			"setFixedLengthStreamingMode",
			"(J)V",
			arg0
		);
	}
	void HttpURLConnection::setFixedLengthStreamingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setFixedLengthStreamingMode",
			"(I)V",
			arg0
		);
	}
	void HttpURLConnection::setChunkedStreamingMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setChunkedStreamingMode",
			"(I)V",
			arg0
		);
	}
	void HttpURLConnection::setFollowRedirects(jboolean arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"java.net.HttpURLConnection",
			"setFollowRedirects",
			"(Z)V",
			arg0
		);
	}
	jboolean HttpURLConnection::getFollowRedirects()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.HttpURLConnection",
			"getFollowRedirects",
			"()Z"
		);
	}
	void HttpURLConnection::setInstanceFollowRedirects(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setInstanceFollowRedirects",
			"(Z)V",
			arg0
		);
	}
	jboolean HttpURLConnection::getInstanceFollowRedirects()
	{
		return __thiz.callMethod<jboolean>(
			"getInstanceFollowRedirects",
			"()Z"
		);
	}
	jstring HttpURLConnection::getRequestMethod()
	{
		return __thiz.callObjectMethod(
			"getRequestMethod",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring HttpURLConnection::getResponseMessage()
	{
		return __thiz.callObjectMethod(
			"getResponseMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean HttpURLConnection::usingProxy()
	{
		return __thiz.callMethod<jboolean>(
			"usingProxy",
			"()Z"
		);
	}
	jstring HttpURLConnection::getHeaderField(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring HttpURLConnection::getHeaderFieldKey(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong HttpURLConnection::getHeaderFieldDate(jstring arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jlong HttpURLConnection::getHeaderFieldDate(const QString &arg0, jlong arg1)
	{
		return __thiz.callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject HttpURLConnection::getErrorStream()
	{
		return __thiz.callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class HttpURLConnection : public __jni_impl::java::net::HttpURLConnection
	{
	public:
		HttpURLConnection(QAndroidJniObject obj) { __thiz = obj; }
		HttpURLConnection()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_HTTPURLCONNECTION

