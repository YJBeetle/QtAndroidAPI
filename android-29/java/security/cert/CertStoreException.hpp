#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"


namespace java::security::cert
{
	class CertStoreException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		CertStoreException(QAndroidJniObject obj);
		// Constructors
		CertStoreException();
		CertStoreException(jstring &arg0);
		CertStoreException(const QString &arg0);
		CertStoreException(jthrowable &arg0);
		CertStoreException(jstring &arg0, jthrowable &arg1);
		CertStoreException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace java::security::cert

