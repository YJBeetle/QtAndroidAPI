#pragma once

#include "./Identity.hpp"

class JString;
namespace java::security
{
	class IdentityScope;
}
namespace java::security
{
	class KeyPair;
}

namespace java::security
{
	class Signer : public java::security::Identity
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Signer(const char *className, const char *sig, Ts...agv) : java::security::Identity(className, sig, std::forward<Ts>(agv)...) {}
		Signer(QAndroidJniObject obj);
		
		// Constructors
		Signer(JString arg0);
		Signer(JString arg0, java::security::IdentityScope arg1);
		
		// Methods
		JObject getPrivateKey();
		void setKeyPair(java::security::KeyPair arg0);
		JString toString();
	};
} // namespace java::security

