#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Exception.hpp"
#include "../GeneralSecurityException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::security::cert
{
	class CertPath;
}

namespace java::security::cert
{
	class CertPathValidatorException : public java::security::GeneralSecurityException
	{
	public:
		// Fields
		
		CertPathValidatorException(QAndroidJniObject obj);
		// Constructors
		CertPathValidatorException();
		CertPathValidatorException(jstring &arg0);
		CertPathValidatorException(const QString &arg0);
		CertPathValidatorException(jthrowable &arg0);
		CertPathValidatorException(jstring &arg0, jthrowable &arg1);
		CertPathValidatorException(const QString &arg0, jthrowable &arg1);
		CertPathValidatorException(jstring &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3);
		CertPathValidatorException(const QString &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3);
		CertPathValidatorException(jstring &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3, __JniBaseClass &arg4);
		CertPathValidatorException(const QString &arg0, jthrowable &arg1, java::security::cert::CertPath &arg2, jint &arg3, __JniBaseClass &arg4);
		
		// Methods
		QAndroidJniObject getCertPath();
		jint getIndex();
		QAndroidJniObject getReason();
	};
} // namespace java::security::cert

