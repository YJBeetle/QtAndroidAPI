#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/security/ProviderException.hpp"


namespace android::security::keystore
{
	class SecureKeyImportUnavailableException : public java::security::ProviderException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecureKeyImportUnavailableException(const char *className, const char *sig, Ts...agv) : java::security::ProviderException(className, sig, std::forward<Ts>(agv)...) {}
		SecureKeyImportUnavailableException(QJniObject obj);
		
		// Constructors
		SecureKeyImportUnavailableException();
		SecureKeyImportUnavailableException(jstring arg0);
		SecureKeyImportUnavailableException(jthrowable arg0);
		SecureKeyImportUnavailableException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security::keystore

