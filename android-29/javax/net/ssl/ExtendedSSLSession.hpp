#pragma once

#include "../../../__JniBaseClass.hpp"


namespace javax::net::ssl
{
	class ExtendedSSLSession : public __JniBaseClass
	{
	public:
		// Fields
		
		ExtendedSSLSession(QAndroidJniObject obj);
		// Constructors
		ExtendedSSLSession();
		
		// Methods
		jarray getLocalSupportedSignatureAlgorithms();
		jarray getPeerSupportedSignatureAlgorithms();
		QAndroidJniObject getRequestedServerNames();
		QAndroidJniObject getStatusResponses();
	};
} // namespace javax::net::ssl

