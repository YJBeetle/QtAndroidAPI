#pragma once

#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ClientCertRequest.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline ClientCertRequest::ClientCertRequest()
		: JObject(
			"android.webkit.ClientCertRequest",
			"()V"
		) {}
	
	// Methods
	inline void ClientCertRequest::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline JString ClientCertRequest::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	inline JArray ClientCertRequest::getKeyTypes() const
	{
		return callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;"
		);
	}
	inline jint ClientCertRequest::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	inline JArray ClientCertRequest::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		);
	}
	inline void ClientCertRequest::ignore() const
	{
		callMethod<void>(
			"ignore",
			"()V"
		);
	}
	inline void ClientCertRequest::proceed(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace android::webkit

// Base class headers

