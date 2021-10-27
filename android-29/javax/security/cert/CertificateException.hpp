#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace javax::security::cert
{
	class CertificateException : public java::lang::Exception
	{
	public:
		// Fields
		
		CertificateException(QAndroidJniObject obj);
		// Constructors
		CertificateException();
		CertificateException(jstring &arg0);
		CertificateException(const QString &arg0);
		
		// Methods
	};
} // namespace javax::security::cert

