#include "./ClientCertRequest.hpp"

namespace android::webkit
{
	// Fields
	
	// QJniObject forward
	ClientCertRequest::ClientCertRequest(QJniObject obj) : JObject(obj) {}
	
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
	jstring ClientCertRequest::getHost()
	{
		return callObjectMethod(
			"getHost",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jarray ClientCertRequest::getKeyTypes()
	{
		return callObjectMethod(
			"getKeyTypes",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jint ClientCertRequest::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jarray ClientCertRequest::getPrincipals()
	{
		return callObjectMethod(
			"getPrincipals",
			"()[Ljava/security/Principal;"
		).object<jarray>();
	}
	void ClientCertRequest::ignore()
	{
		callMethod<void>(
			"ignore",
			"()V"
		);
	}
	void ClientCertRequest::proceed(JObject arg0, jarray arg1)
	{
		callMethod<void>(
			"proceed",
			"(Ljava/security/PrivateKey;[Ljava/security/cert/X509Certificate;)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::webkit

