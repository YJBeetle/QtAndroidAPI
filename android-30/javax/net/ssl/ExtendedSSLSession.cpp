#include "../../../JArray.hpp"
#include "./ExtendedSSLSession.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QAndroidJniObject forward
	ExtendedSSLSession::ExtendedSSLSession(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExtendedSSLSession::ExtendedSSLSession()
		: JObject(
			"javax.net.ssl.ExtendedSSLSession",
			"()V"
		) {}
	
	// Methods
	JArray ExtendedSSLSession::getLocalSupportedSignatureAlgorithms() const
	{
		return callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	JArray ExtendedSSLSession::getPeerSupportedSignatureAlgorithms() const
	{
		return callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	JObject ExtendedSSLSession::getRequestedServerNames() const
	{
		return callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;"
		);
	}
	JObject ExtendedSSLSession::getStatusResponses() const
	{
		return callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

