#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JString;

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
		KeyStore_PasswordProtection(JCharArray arg0);
		KeyStore_PasswordProtection(JCharArray arg0, JString arg1, JObject arg2);
		
		// Methods
		void destroy() const;
		JCharArray getPassword() const;
		JString getProtectionAlgorithm() const;
		JObject getProtectionParameters() const;
		jboolean isDestroyed() const;
	};
} // namespace java::security

