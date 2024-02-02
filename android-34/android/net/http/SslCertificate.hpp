#pragma once

#include "./SslCertificate_DName.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/security/cert/X509Certificate.def.hpp"
#include "../../../java/util/Date.def.hpp"
#include "./SslCertificate.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline SslCertificate::SslCertificate(java::security::cert::X509Certificate arg0)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/security/cert/X509Certificate;)V",
			arg0.object()
		) {}
	inline SslCertificate::SslCertificate(JString arg0, JString arg1, JString arg2, JString arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		) {}
	inline SslCertificate::SslCertificate(JString arg0, JString arg1, java::util::Date arg2, java::util::Date arg3)
		: JObject(
			"android.net.http.SslCertificate",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Date;Ljava/util/Date;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::net::http::SslCertificate SslCertificate::restoreState(android::os::Bundle arg0)
	{
		return callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"restoreState",
			"(Landroid/os/Bundle;)Landroid/net/http/SslCertificate;",
			arg0.object()
		);
	}
	inline android::os::Bundle SslCertificate::saveState(android::net::http::SslCertificate arg0)
	{
		return callStaticObjectMethod(
			"android.net.http.SslCertificate",
			"saveState",
			"(Landroid/net/http/SslCertificate;)Landroid/os/Bundle;",
			arg0.object()
		);
	}
	inline android::net::http::SslCertificate_DName SslCertificate::getIssuedBy() const
	{
		return callObjectMethod(
			"getIssuedBy",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	inline android::net::http::SslCertificate_DName SslCertificate::getIssuedTo() const
	{
		return callObjectMethod(
			"getIssuedTo",
			"()Landroid/net/http/SslCertificate$DName;"
		);
	}
	inline JString SslCertificate::getValidNotAfter() const
	{
		return callObjectMethod(
			"getValidNotAfter",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Date SslCertificate::getValidNotAfterDate() const
	{
		return callObjectMethod(
			"getValidNotAfterDate",
			"()Ljava/util/Date;"
		);
	}
	inline JString SslCertificate::getValidNotBefore() const
	{
		return callObjectMethod(
			"getValidNotBefore",
			"()Ljava/lang/String;"
		);
	}
	inline java::util::Date SslCertificate::getValidNotBeforeDate() const
	{
		return callObjectMethod(
			"getValidNotBeforeDate",
			"()Ljava/util/Date;"
		);
	}
	inline java::security::cert::X509Certificate SslCertificate::getX509Certificate() const
	{
		return callObjectMethod(
			"getX509Certificate",
			"()Ljava/security/cert/X509Certificate;"
		);
	}
	inline JString SslCertificate::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
