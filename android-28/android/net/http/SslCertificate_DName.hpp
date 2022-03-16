#pragma once

#include "./SslCertificate.def.hpp"
#include "../../../JString.hpp"
#include "./SslCertificate_DName.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline SslCertificate_DName::SslCertificate_DName(android::net::http::SslCertificate arg0, JString arg1)
		: JObject(
			"android.net.http.SslCertificate$DName",
			"(Landroid/net/http/SslCertificate;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline JString SslCertificate_DName::getCName() const
	{
		return callObjectMethod(
			"getCName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SslCertificate_DName::getDName() const
	{
		return callObjectMethod(
			"getDName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SslCertificate_DName::getOName() const
	{
		return callObjectMethod(
			"getOName",
			"()Ljava/lang/String;"
		);
	}
	inline JString SslCertificate_DName::getUName() const
	{
		return callObjectMethod(
			"getUName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net::http

// Base class headers

