#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateExpiredException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateExpiredException(QAndroidJniObject obj);
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert

