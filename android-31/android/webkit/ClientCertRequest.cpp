#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ClientCertRequest.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	ClientCertRequest::ClientCertRequest()
		: JObject(
			"android.webkit.ClientCertRequest",
			"()V"
		) {}
	
	// Methods
	void ClientCertRequest::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	JString ClientCertRequest::getHost() const
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JArray ClientCertRequest::getKeyTypes() const
	{
		return callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;"
		);
	}
	jint ClientCertRequest::getPort() const
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JArray ClientCertRequest::getPrincipals() const
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		);
	}
	void ClientCertRequest::ignore() const
	{
		callMethod<void>(
			"ignore",
			"()V"
		);
	}
	void ClientCertRequest::proceed(JObject arg0, JArray arg1) const
	{
		callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace android::webkit

