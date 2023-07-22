#pragma once

#include "../../../java/security/ProviderException.def.hpp"

class JString;
class JThrowable;

namespace android::security::keystore
{
	class SecureKeyImportUnavailableException : public java::security::ProviderException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SecureKeyImportUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		SecureKeyImportUnavailableException(QAndroidJniObject obj) : java::security::ProviderException(obj) {}
		
		// Constructors
		SecureKeyImportUnavailableException();
		SecureKeyImportUnavailableException(JString arg0);
		SecureKeyImportUnavailableException(JThrowable arg0);
		SecureKeyImportUnavailableException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

