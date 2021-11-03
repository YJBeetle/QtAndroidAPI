#pragma once

#include "../../JObject.hpp"

namespace java::security::cert
{
	class Certificate;
}

namespace java::security
{
	class KeyStore_PrivateKeyEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_PrivateKeyEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_PrivateKeyEntry(QJniObject obj);
		
		// Constructors
		KeyStore_PrivateKeyEntry(JObject arg0, jarray arg1);
		KeyStore_PrivateKeyEntry(JObject arg0, jarray arg1, JObject arg2);
		
		// Methods
		JObject getAttributes();
		java::security::cert::Certificate getCertificate();
		jarray getCertificateChain();
		JObject getPrivateKey();
		jstring toString();
	};
} // namespace java::security

