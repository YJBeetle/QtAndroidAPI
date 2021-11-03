#include "../../JArray.hpp"
#include "../io/InputStream.hpp"
#include "../../JString.hpp"
#include "./Authenticator.hpp"
#include "./URL.hpp"
#include "../security/Permission.hpp"
#include "./HttpURLConnection.hpp"

namespace java::net
{
	// Fields
	jint HttpURLConnection::HTTP_ACCEPTED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ACCEPTED"
		);
	}
	jint HttpURLConnection::HTTP_BAD_GATEWAY()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_GATEWAY"
		);
	}
	jint HttpURLConnection::HTTP_BAD_METHOD()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_METHOD"
		);
	}
	jint HttpURLConnection::HTTP_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_REQUEST"
		);
	}
	jint HttpURLConnection::HTTP_CLIENT_TIMEOUT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CLIENT_TIMEOUT"
		);
	}
	jint HttpURLConnection::HTTP_CONFLICT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CONFLICT"
		);
	}
	jint HttpURLConnection::HTTP_CREATED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CREATED"
		);
	}
	jint HttpURLConnection::HTTP_ENTITY_TOO_LARGE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ENTITY_TOO_LARGE"
		);
	}
	jint HttpURLConnection::HTTP_FORBIDDEN()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_FORBIDDEN"
		);
	}
	jint HttpURLConnection::HTTP_GATEWAY_TIMEOUT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GATEWAY_TIMEOUT"
		);
	}
	jint HttpURLConnection::HTTP_GONE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GONE"
		);
	}
	jint HttpURLConnection::HTTP_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_INTERNAL_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_LENGTH_REQUIRED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_LENGTH_REQUIRED"
		);
	}
	jint HttpURLConnection::HTTP_MOVED_PERM()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_PERM"
		);
	}
	jint HttpURLConnection::HTTP_MOVED_TEMP()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_TEMP"
		);
	}
	jint HttpURLConnection::HTTP_MULT_CHOICE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MULT_CHOICE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_ACCEPTABLE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_AUTHORITATIVE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_AUTHORITATIVE"
		);
	}
	jint HttpURLConnection::HTTP_NOT_FOUND()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_FOUND"
		);
	}
	jint HttpURLConnection::HTTP_NOT_IMPLEMENTED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_IMPLEMENTED"
		);
	}
	jint HttpURLConnection::HTTP_NOT_MODIFIED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_MODIFIED"
		);
	}
	jint HttpURLConnection::HTTP_NO_CONTENT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NO_CONTENT"
		);
	}
	jint HttpURLConnection::HTTP_OK()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_OK"
		);
	}
	jint HttpURLConnection::HTTP_PARTIAL()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PARTIAL"
		);
	}
	jint HttpURLConnection::HTTP_PAYMENT_REQUIRED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PAYMENT_REQUIRED"
		);
	}
	jint HttpURLConnection::HTTP_PRECON_FAILED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PRECON_FAILED"
		);
	}
	jint HttpURLConnection::HTTP_PROXY_AUTH()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PROXY_AUTH"
		);
	}
	jint HttpURLConnection::HTTP_REQ_TOO_LONG()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_REQ_TOO_LONG"
		);
	}
	jint HttpURLConnection::HTTP_RESET()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_RESET"
		);
	}
	jint HttpURLConnection::HTTP_SEE_OTHER()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SEE_OTHER"
		);
	}
	jint HttpURLConnection::HTTP_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SERVER_ERROR"
		);
	}
	jint HttpURLConnection::HTTP_UNAUTHORIZED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAUTHORIZED"
		);
	}
	jint HttpURLConnection::HTTP_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAVAILABLE"
		);
	}
	jint HttpURLConnection::HTTP_UNSUPPORTED_TYPE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNSUPPORTED_TYPE"
		);
	}
	jint HttpURLConnection::HTTP_USE_PROXY()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_USE_PROXY"
		);
	}
	jint HttpURLConnection::HTTP_VERSION()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_VERSION"
		);
	}
	
	// QJniObject forward
	HttpURLConnection::HttpURLConnection(QJniObject obj) : java::net::URLConnection(obj) {}
	
	// Constructors
	
	// Methods
	jboolean HttpURLConnection::getFollowRedirects()
	{
		return callStaticMethod<jboolean>(
			"java.net.HttpURLConnection",
			"getFollowRedirects",
			"()Z"
		);
	}
	void HttpURLConnection::setFollowRedirects(jboolean arg0)
	{
		callStaticMethod<void>(
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
	java::io::InputStream HttpURLConnection::getErrorStream()
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	JString HttpURLConnection::getHeaderField(jint arg0)
	{
		return callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jlong HttpURLConnection::getHeaderFieldDate(JString arg0, jlong arg1)
	{
		return callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString HttpURLConnection::getHeaderFieldKey(jint arg0)
	{
		return callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	jboolean HttpURLConnection::getInstanceFollowRedirects()
	{
		return callMethod<jboolean>(
			"getInstanceFollowRedirects",
			"()Z"
		);
	}
	java::security::Permission HttpURLConnection::getPermission()
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	JString HttpURLConnection::getRequestMethod()
	{
		return callObjectMethod(
			"getRequestMethod",
			"()Ljava/lang/String;"
		);
	}
	jint HttpURLConnection::getResponseCode()
	{
		return callMethod<jint>(
			"getResponseCode",
			"()I"
		);
	}
	JString HttpURLConnection::getResponseMessage()
	{
		return callObjectMethod(
			"getResponseMessage",
			"()Ljava/lang/String;"
		);
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
	void HttpURLConnection::setRequestMethod(JString arg0)
	{
		callMethod<void>(
			"setRequestMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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

