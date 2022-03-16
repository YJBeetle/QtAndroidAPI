#pragma once

#include "./SslCertificate.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "./SslError.def.hpp"

namespace android::net::http
{
	// Fields
	inline jint SslError::SSL_DATE_INVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_DATE_INVALID"
		);
	}
	inline jint SslError::SSL_EXPIRED()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_EXPIRED"
		);
	}
	inline jint SslError::SSL_IDMISMATCH()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_IDMISMATCH"
		);
	}
	inline jint SslError::SSL_INVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_INVALID"
		);
	}
	inline jint SslError::SSL_MAX_ERROR()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_MAX_ERROR"
		);
	}
	inline jint SslError::SSL_NOTYETVALID()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_NOTYETVALID"
		);
	}
	inline jint SslError::SSL_UNTRUSTED()
	{
		return getStaticField<jint>(
			"android.net.http.SslError",
			"SSL_UNTRUSTED"
		);
	}
	
	// Constructors
	inline SslError::SslError(jint arg0, android::net::http::SslCertificate arg1)
		: JObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;)V",
			arg0,
			arg1.object()
		) {}
	inline SslError::SslError(jint arg0, java::security::cert::X509Certificate arg1)
		: JObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;)V",
			arg0,
			arg1.object()
		) {}
	inline SslError::SslError(jint arg0, android::net::http::SslCertificate arg1, JString arg2)
		: JObject(
			"android.net.http.SslError",
			"(ILandroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		) {}
	inline SslError::SslError(jint arg0, java::security::cert::X509Certificate arg1, JString arg2)
		: JObject(
			"android.net.http.SslError",
			"(ILjava/security/cert/X509Certificate;Ljava/lang/String;)V",
			arg0,
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline jboolean SslError::addError(jint arg0) const
	{
		return callMethod<jboolean>(
			"addError",
			"(I)Z",
			arg0
		);
	}
	inline android::net::http::SslCertificate SslError::getCertificate() const
	{
		return callObjectMethod(
			"getCertificate",
			"()Landroid/net/http/SslCertificate;"
		);
	}
	inline jint SslError::getPrimaryError() const
	{
		return callMethod<jint>(
			"getPrimaryError",
			"()I"
		);
	}
	inline JString SslError::getUrl() const
	{
		return callObjectMethod(
			"getUrl",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean SslError::hasError(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasError",
			"(I)Z",
			arg0
		);
	}
	inline JString SslError::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

// Base class headers

