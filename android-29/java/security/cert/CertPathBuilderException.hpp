#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertPathBuilderException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		CertPathBuilderException(QAndroidJniObject obj);
		// Constructors
		CertPathBuilderException();
		CertPathBuilderException(jstring &arg0);
		CertPathBuilderException(const QString &arg0);
		CertPathBuilderException(jthrowable &arg0);
		CertPathBuilderException(jstring &arg0, jthrowable &arg1);
		CertPathBuilderException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::security::cert

