#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertificateException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		CertificateException(QAndroidJniObject obj);
		// Constructors
		CertificateException();
		CertificateException(jstring arg0);
		CertificateException(jthrowable arg0);
		CertificateException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace java::security::cert

