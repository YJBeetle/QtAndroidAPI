#pragma once

#include "../../JArray.hpp"
#include "../io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./Authenticator.def.hpp"
#include "./URL.def.hpp"
#include "../security/Permission.def.hpp"
#include "./HttpURLConnection.def.hpp"

namespace java::net
{
	// Fields
	inline jint HttpURLConnection::HTTP_ACCEPTED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ACCEPTED"
		);
	}
	inline jint HttpURLConnection::HTTP_BAD_GATEWAY()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_GATEWAY"
		);
	}
	inline jint HttpURLConnection::HTTP_BAD_METHOD()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_METHOD"
		);
	}
	inline jint HttpURLConnection::HTTP_BAD_REQUEST()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_BAD_REQUEST"
		);
	}
	inline jint HttpURLConnection::HTTP_CLIENT_TIMEOUT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CLIENT_TIMEOUT"
		);
	}
	inline jint HttpURLConnection::HTTP_CONFLICT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CONFLICT"
		);
	}
	inline jint HttpURLConnection::HTTP_CREATED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_CREATED"
		);
	}
	inline jint HttpURLConnection::HTTP_ENTITY_TOO_LARGE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_ENTITY_TOO_LARGE"
		);
	}
	inline jint HttpURLConnection::HTTP_FORBIDDEN()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_FORBIDDEN"
		);
	}
	inline jint HttpURLConnection::HTTP_GATEWAY_TIMEOUT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GATEWAY_TIMEOUT"
		);
	}
	inline jint HttpURLConnection::HTTP_GONE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_GONE"
		);
	}
	inline jint HttpURLConnection::HTTP_INTERNAL_ERROR()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_INTERNAL_ERROR"
		);
	}
	inline jint HttpURLConnection::HTTP_LENGTH_REQUIRED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_LENGTH_REQUIRED"
		);
	}
	inline jint HttpURLConnection::HTTP_MOVED_PERM()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_PERM"
		);
	}
	inline jint HttpURLConnection::HTTP_MOVED_TEMP()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MOVED_TEMP"
		);
	}
	inline jint HttpURLConnection::HTTP_MULT_CHOICE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_MULT_CHOICE"
		);
	}
	inline jint HttpURLConnection::HTTP_NOT_ACCEPTABLE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_ACCEPTABLE"
		);
	}
	inline jint HttpURLConnection::HTTP_NOT_AUTHORITATIVE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_AUTHORITATIVE"
		);
	}
	inline jint HttpURLConnection::HTTP_NOT_FOUND()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_FOUND"
		);
	}
	inline jint HttpURLConnection::HTTP_NOT_IMPLEMENTED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_IMPLEMENTED"
		);
	}
	inline jint HttpURLConnection::HTTP_NOT_MODIFIED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NOT_MODIFIED"
		);
	}
	inline jint HttpURLConnection::HTTP_NO_CONTENT()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_NO_CONTENT"
		);
	}
	inline jint HttpURLConnection::HTTP_OK()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_OK"
		);
	}
	inline jint HttpURLConnection::HTTP_PARTIAL()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PARTIAL"
		);
	}
	inline jint HttpURLConnection::HTTP_PAYMENT_REQUIRED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PAYMENT_REQUIRED"
		);
	}
	inline jint HttpURLConnection::HTTP_PRECON_FAILED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PRECON_FAILED"
		);
	}
	inline jint HttpURLConnection::HTTP_PROXY_AUTH()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_PROXY_AUTH"
		);
	}
	inline jint HttpURLConnection::HTTP_REQ_TOO_LONG()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_REQ_TOO_LONG"
		);
	}
	inline jint HttpURLConnection::HTTP_RESET()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_RESET"
		);
	}
	inline jint HttpURLConnection::HTTP_SEE_OTHER()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SEE_OTHER"
		);
	}
	inline jint HttpURLConnection::HTTP_SERVER_ERROR()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_SERVER_ERROR"
		);
	}
	inline jint HttpURLConnection::HTTP_UNAUTHORIZED()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAUTHORIZED"
		);
	}
	inline jint HttpURLConnection::HTTP_UNAVAILABLE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNAVAILABLE"
		);
	}
	inline jint HttpURLConnection::HTTP_UNSUPPORTED_TYPE()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_UNSUPPORTED_TYPE"
		);
	}
	inline jint HttpURLConnection::HTTP_USE_PROXY()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_USE_PROXY"
		);
	}
	inline jint HttpURLConnection::HTTP_VERSION()
	{
		return getStaticField<jint>(
			"java.net.HttpURLConnection",
			"HTTP_VERSION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean HttpURLConnection::getFollowRedirects()
	{
		return callStaticMethod<jboolean>(
			"java.net.HttpURLConnection",
			"getFollowRedirects",
			"()Z"
		);
	}
	inline void HttpURLConnection::setFollowRedirects(jboolean arg0)
	{
		callStaticMethod<void>(
			"java.net.HttpURLConnection",
			"setFollowRedirects",
			"(Z)V",
			arg0
		);
	}
	inline void HttpURLConnection::disconnect() const
	{
		callMethod<void>(
			"disconnect",
			"()V"
		);
	}
	inline java::io::InputStream HttpURLConnection::getErrorStream() const
	{
		return callObjectMethod(
			"getErrorStream",
			"()Ljava/io/InputStream;"
		);
	}
	inline JString HttpURLConnection::getHeaderField(jint arg0) const
	{
		return callObjectMethod(
			"getHeaderField",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jlong HttpURLConnection::getHeaderFieldDate(JString arg0, jlong arg1) const
	{
		return callMethod<jlong>(
			"getHeaderFieldDate",
			"(Ljava/lang/String;J)J",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline JString HttpURLConnection::getHeaderFieldKey(jint arg0) const
	{
		return callObjectMethod(
			"getHeaderFieldKey",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	inline jboolean HttpURLConnection::getInstanceFollowRedirects() const
	{
		return callMethod<jboolean>(
			"getInstanceFollowRedirects",
			"()Z"
		);
	}
	inline java::security::Permission HttpURLConnection::getPermission() const
	{
		return callObjectMethod(
			"getPermission",
			"()Ljava/security/Permission;"
		);
	}
	inline JString HttpURLConnection::getRequestMethod() const
	{
		return callObjectMethod(
			"getRequestMethod",
			"()Ljava/lang/String;"
		);
	}
	inline jint HttpURLConnection::getResponseCode() const
	{
		return callMethod<jint>(
			"getResponseCode",
			"()I"
		);
	}
	inline JString HttpURLConnection::getResponseMessage() const
	{
		return callObjectMethod(
			"getResponseMessage",
			"()Ljava/lang/String;"
		);
	}
	inline void HttpURLConnection::setAuthenticator(java::net::Authenticator arg0) const
	{
		callMethod<void>(
			"setAuthenticator",
			"(Ljava/net/Authenticator;)V",
			arg0.object()
		);
	}
	inline void HttpURLConnection::setChunkedStreamingMode(jint arg0) const
	{
		callMethod<void>(
			"setChunkedStreamingMode",
			"(I)V",
			arg0
		);
	}
	inline void HttpURLConnection::setFixedLengthStreamingMode(jint arg0) const
	{
		callMethod<void>(
			"setFixedLengthStreamingMode",
			"(I)V",
			arg0
		);
	}
	inline void HttpURLConnection::setFixedLengthStreamingMode(jlong arg0) const
	{
		callMethod<void>(
			"setFixedLengthStreamingMode",
			"(J)V",
			arg0
		);
	}
	inline void HttpURLConnection::setInstanceFollowRedirects(jboolean arg0) const
	{
		callMethod<void>(
			"setInstanceFollowRedirects",
			"(Z)V",
			arg0
		);
	}
	inline void HttpURLConnection::setRequestMethod(JString arg0) const
	{
		callMethod<void>(
			"setRequestMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline jboolean HttpURLConnection::usingProxy() const
	{
		return callMethod<jboolean>(
			"usingProxy",
			"()Z"
		);
	}
} // namespace java::net

// Base class headers
#include "./URLConnection.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
