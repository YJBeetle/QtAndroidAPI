#include "./ExtendedSSLSession.hpp"

namespace javax::net::ssl
{
	// Fields
	
	// QJniObject forward
	ExtendedSSLSession::ExtendedSSLSession(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ExtendedSSLSession::ExtendedSSLSession()
		: __JniBaseClass(
			"javax.net.ssl.ExtendedSSLSession",
			"()V"
		) {}
	
	// Methods
	jarray ExtendedSSLSession::getLocalSupportedSignatureAlgorithms()
	{
		return callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ExtendedSSLSession::getPeerSupportedSignatureAlgorithms()
	{
		return callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	__JniBaseClass ExtendedSSLSession::getRequestedServerNames()
	{
		return callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;"
		);
	}
	__JniBaseClass ExtendedSSLSession::getStatusResponses()
	{
		return callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

