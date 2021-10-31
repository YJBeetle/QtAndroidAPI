#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateParsingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateParsingException(QAndroidJniObject obj);
		// Constructors
		CertificateParsingException();
		CertificateParsingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert

