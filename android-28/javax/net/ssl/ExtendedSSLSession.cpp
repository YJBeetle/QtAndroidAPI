#include "../../../JArray.hpp"
#include "./ExtendedSSLSession.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	ExtendedSSLSession::ExtendedSSLSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	ExtendedSSLSession::ExtendedSSLSession()
		: JObject(
			"javax.net.ssl.ExtendedSSLSession",
			"()V"
		) {}
	
	// Methods
	JArray ExtendedSSLSession::getLocalSupportedSignatureAlgorithms()
	{
		return callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	JArray ExtendedSSLSession::getPeerSupportedSignatureAlgorithms()
	{
		return callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		);
	}
	JObject ExtendedSSLSession::getRequestedServerNames()
	{
		return callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;"
		);
	}
	JObject ExtendedSSLSession::getStatusResponses()
	{
		return callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

