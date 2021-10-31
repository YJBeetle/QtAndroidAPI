#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateExpiredException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateExpiredException(QAndroidJniObject obj);
		// Constructors
		CertificateExpiredException();
		CertificateExpiredException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::cert

