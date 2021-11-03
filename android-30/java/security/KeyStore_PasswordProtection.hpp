#pragma once

#include "../../JObject.hpp"


namespace java::security
{
	class KeyStore_PasswordProtection : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyStore_PasswordProtection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyStore_PasswordProtection(QJniObject obj);
		
		// Constructors
		KeyStore_PasswordProtection(jcharArray arg0);
		KeyStore_PasswordProtection(jcharArray arg0, jstring arg1, JObject arg2);
		
		// Methods
		void destroy();
		jcharArray getPassword();
		jstring getProtectionAlgorithm();
		JObject getProtectionParameters();
		jboolean isDestroyed();
	};
} // namespace java::security

