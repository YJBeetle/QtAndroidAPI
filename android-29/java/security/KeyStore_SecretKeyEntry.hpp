#pragma once

#include "../../JObject.hpp"


namespace java::security
{
	class KeyStore_SecretKeyEntry : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_SecretKeyEntry(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_SecretKeyEntry(QJniObject obj);
		
		// Constructors
		KeyStore_SecretKeyEntry(JObject arg0);
		KeyStore_SecretKeyEntry(JObject arg0, JObject arg1);
		
		// Methods
		JObject getAttributes();
		JObject getSecretKey();
		jstring toString();
	};
} // namespace java::security

