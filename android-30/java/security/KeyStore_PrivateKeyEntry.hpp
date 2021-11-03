#pragma once

#include "../../JObject.hpp"

class JArray;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyStore_PrivateKeyEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_PrivateKeyEntry(QAndroidJniObject obj);
		
		// Constructors
		KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1);
		KeyStore_PrivateKeyEntry(JObject arg0, JArray arg1, JObject arg2);
		
		// Methods
		JObject getAttributes();
		java::security::cert::Certificate getCertificate();
		JArray getCertificateChain();
		JObject getPrivateKey();
		JString toString();
	};
} // namespace java::security

