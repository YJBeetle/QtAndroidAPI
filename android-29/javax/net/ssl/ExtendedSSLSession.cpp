#include "./ExtendedSSLSession.hpp"

namespace javax::net::ssl
{
	// Fields
	
	ExtendedSSLSession::ExtendedSSLSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ExtendedSSLSession::ExtendedSSLSession()
	{
		__thiz = QAndroidJniObject(
			"javax.net.ssl.ExtendedSSLSession",
			"()V"
		);
	}
	
	// Methods
	jarray ExtendedSSLSession::getLocalSupportedSignatureAlgorithms()
	{
		return __thiz.callObjectMethod(
			"getLocalSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	jarray ExtendedSSLSession::getPeerSupportedSignatureAlgorithms()
	{
		return __thiz.callObjectMethod(
			"getPeerSupportedSignatureAlgorithms",
			"()[Ljava/lang/String;"
		).object<jarray>();
	}
	QAndroidJniObject ExtendedSSLSession::getRequestedServerNames()
	{
		return __thiz.callObjectMethod(
			"getRequestedServerNames",
			"()Ljava/util/List;"
		);
	}
	QAndroidJniObject ExtendedSSLSession::getStatusResponses()
	{
		return __thiz.callObjectMethod(
			"getStatusResponses",
			"()Ljava/util/List;"
		);
	}
} // namespace javax::net::ssl

