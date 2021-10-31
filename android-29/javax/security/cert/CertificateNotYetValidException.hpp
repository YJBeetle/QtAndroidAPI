#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./CertificateException.hpp"


namespace javax::security::cert
{
	class CertificateNotYetValidException : public javax::security::cert::CertificateException
	{
	public:
		// Fields
		
		CertificateNotYetValidException(QAndroidJniObject obj);
		// Constructors
		CertificateNotYetValidException();
		CertificateNotYetValidException(jstring arg0);
		
		// Methods
	};
} // namespace javax::security::cert

