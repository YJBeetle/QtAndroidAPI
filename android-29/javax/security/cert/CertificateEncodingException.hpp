#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateEncodingException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateEncodingException(QAndroidJniObject obj);
		// Constructors
		CertificateEncodingException();
		CertificateEncodingException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert

