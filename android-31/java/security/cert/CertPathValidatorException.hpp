#pragma once

#include "../GeneralSecurityException.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JString;
class JThrowable;
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
		CertPathValidatorException(JString arg0);
		CertPathValidatorException(JThrowable arg0);
		CertPathValidatorException(JString arg0, JThrowable arg1);
		CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3);
		CertPathValidatorException(JString arg0, JThrowable arg1, java::security::cert::CertPath arg2, jint arg3, JObject arg4);
		
		// Methods
		java::security::cert::CertPath getCertPath() const;
		jint getIndex() const;
		JObject getReason() const;
	};
} // namespace java::security::cert

