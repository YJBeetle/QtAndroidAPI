#include "../io/InputStream.hpp"
#include "./Authenticator.hpp"
#include "./URL.hpp"
#include "../security/Permission.hpp"
#include "./HttpURLConnection.hpp"

namespace java::net
{
	// Fields
	jint HttpURLConnection::HTTP_ACCEPTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ACCEPTED"
		);
	}
	jint HttpURLConnection::HTTP_BAD_GATEWAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_GATEWAY"
		);
	}
	jint HttpURLConnection::HTTP_BAD_METHOD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_METHOD"
		);
	}
	jint HttpURLConnection::HTTP_BAD_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_REQUEST"
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
	jint HttpURLConnection::HTTP_CREATED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CREATED"
		);
	}
	jint HttpURLConnection::HTTP_ENTITY_TOO_LARGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ENTITY_TOO_LARGE"
		);
	}
	jint HttpURLConnection::HTTP_FORBIDDEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_FORBIDDEN"
		);
	}
	jint HttpURLConnection::HTTP_GATEWAY_TIMEOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GATEWAY_TIMEOUT"
		);
	}
	jint HttpURLConnection::HTTP_GONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GONE"
		);
	}
	jint HttpURLConnection::HTTP_INTERNAL_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_INTERNAL_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_LENGTH_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_LENGTH_REQUIRED"
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
	jint HttpURLConnection::HTTP_MULT_CHOICE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MULT_CHOICE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_ACCEPTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_ACCEPTABLE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_AUTHORITATIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_AUTHORITATIVE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_FOUND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_FOUND"
		);
	}
	jint HttpURLConnection::HTTP_NOT_IMPLEMENTED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_IMPLEMENTED"
		);
	}
	jint HttpURLConnection::HTTP_NOT_MODIFIED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_MODIFIED"
		);
	}
	jint HttpURLConnection::HTTP_NO_CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NO_CONTENT"
		);
	}
	jint HttpURLConnection::HTTP_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_OK"
		);
	}
	jint HttpURLConnection::HTTP_PARTIAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PARTIAL"
		);
	}
	jint HttpURLConnection::HTTP_PAYMENT_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PAYMENT_REQUIRED"
		);
	}
	jint HttpURLConnection::HTTP_PRECON_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PRECON_FAILED"
		);
	}
	jint HttpURLConnection::HTTP_PROXY_AUTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PROXY_AUTH"
		);
	}
	jint HttpURLConnection::HTTP_REQ_TOO_LONG()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_REQ_TOO_LONG"
		);
	}
	jint HttpURLConnection::HTTP_RESET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_RESET"
		);
	}
	jint HttpURLConnection::HTTP_SEE_OTHER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SEE_OTHER"
		);
	}
	jint HttpURLConnection::HTTP_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SERVER_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_UNAUTHORIZED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAUTHORIZED"
		);
	}
	jint HttpURLConnection::HTTP_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAVAILABLE"
		);
	}
	jint HttpURLConnection::HTTP_UNSUPPORTED_TYPE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNSUPPORTED_TYPE"
		);
	}
	jint HttpURLConnection::HTTP_USE_PROXY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_USE_PROXY"
		);
	}
	jint HttpURLConnection::HTTP_VERSION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_VERSION"
		);
	}
	
	// QAndroidJniObject forward
	HttpURLConnection::HttpURLConnection(QAndroidJniObject obj) : java::net::URLConnection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean HttpURLConnection::getFollowRedirects()
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"java.net.HttpURLConnection",
			"getFollowRedirects",
			"()Z"
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
	void HttpURLConnection::disconnect()
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	QAndroidJniObject HttpURLConnection::getErrorStream()
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	jstring HttpURLConnection::getHeaderField(jint arg0)
	{
		return callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jlong HttpURLConnection::getHeaderFieldDate(jstring arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0,
			arg1
		);
	}
	jstring HttpURLConnection::getHeaderFieldKey(jint arg0)
	{
		return callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean HttpURLConnection::getInstanceFollowRedirects()
	{
		return callMethod<jboolean>(
			"getInstanceFollowRedirects",
			"()Z"
		);
	}
	QAndroidJniObject HttpURLConnection::getPermission()
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	jstring HttpURLConnection::getRequestMethod()
	{
		return callObjectMethod(
			"getRequestMethod",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint HttpURLConnection::getResponseCode()
	{
		return callMethod<jint>(
			"getResponseCode",
			"()I"
		);
	}
	jstring HttpURLConnection::getResponseMessage()
	{
		return callObjectMethod(
			"getResponseMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void HttpURLConnection::setAuthenticator(java::net::Authenticator arg0)
	{
		callMethod<void>(
			"setAuthenticator",
			"(Ljava/net/Authenticator;)V",
			arg0.object()
		);
	}
	void HttpURLConnection::setChunkedStreamingMode(jint arg0)
	{
		callMethod<void>(
			"setChunkedStreamingMode",
			"(I)V",
			arg0
		);
	}
	void HttpURLConnection::setFixedLengthStreamingMode(jint arg0)
	{
		callMethod<void>(
			"setFixedLengthStreamingMode",
			"(I)V",
			arg0
		);
	}
	void HttpURLConnection::setFixedLengthStreamingMode(jlong arg0)
	{
		callMethod<void>(
			"setFixedLengthStreamingMode",
			"(J)V",
			arg0
		);
	}
	void HttpURLConnection::setInstanceFollowRedirects(jboolean arg0)
	{
		callMethod<void>(
			"setInstanceFollowRedirects",
			"(Z)V",
			arg0
		);
	}
	void HttpURLConnection::setRequestMethod(jstring arg0)
	{
		callMethod<void>(
			"setRequestMethod",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jboolean HttpURLConnection::usingProxy()
	{
		return callMethod<jboolean>(
			"usingProxy",
			"()Z"
		);
	}
} // namespace java::net

