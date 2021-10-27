#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"
#include "./CertificateException.hpp"


namespace java::security::cert
{
	class CertificateParsingException : public java::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateParsingException(QAndroidJniObject obj);
		// Constructors
		CertificateParsingException();
		CertificateParsingException(jstring &arg0);
		CertificateParsingException(const QString &arg0);
		CertificateParsingException(jthrowable &arg0);
		CertificateParsingException(jstring &arg0, jthrowable &arg1);
		CertificateParsingException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::security::cert

