#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateNotYetValidException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateNotYetValidException(QAndroidJniObject obj);
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(jstring arg0);
		
		// Methods
	};
} // namespace java::security::cert

