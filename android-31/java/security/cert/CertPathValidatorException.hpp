#pragma once

#include "../../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CertPathValidatorException(const char *className, const char *sig, Ts...agv) : java::security::GeneralSecurityException(className, sig, std::forward<Ts>(agv)...) {}
		CertPathValidatorException(QAndroidJniObject obj);
		
		// Constructors
		CertPathValidatorException();
		CertPathValidatorException(jstring arg0);
		CertPathValidatorException(jthrowable arg0);
		CertPathValidatorException(jstring arg0, jthrowable arg1);
		CertPathValidatorException(jstring arg0, jthrowable arg1, java::security::cert::CertPath arg2, jint arg3);
		CertPathValidatorException(jstring arg0, jthrowable arg1, java::security::cert::CertPath arg2, jint arg3, JObject arg4);
		
		// Methods
		java::security::cert::CertPath getCertPath();
		jint getIndex();
		JObject getReason();
	};
} // namespace java::security::cert

