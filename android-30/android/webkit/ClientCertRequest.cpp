#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JString.hpp"
#include "./ClientCertRequest.hpp"

namespace android::webkit
{
	// Fields
	
	// QAndroidJniObject forward
	ClientCertRequest::ClientCertRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ClientCertRequest::ClientCertRequest()
		: JObject(
			"android.webkit.ClientCertRequest",
			"()V"
		) {}
	
	// Methods
	void ClientCertRequest::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	JString ClientCertRequest::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		);
	}
	JArray ClientCertRequest::getKeyTypes()
	{
		return callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;"
		);
	}
	jint ClientCertRequest::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JArray ClientCertRequest::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		);
	}
	void ClientCertRequest::ignore()
	{
		callMethod<void>(
			"ignore",
			"()V"
		);
	}
	void ClientCertRequest::proceed(JObject arg0, JArray arg1)
	{
		callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
} // namespace android::webkit

