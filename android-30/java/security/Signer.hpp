#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Identity.hpp"

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
		
		// QJniObject forward
		template<typename ...Ts> explicit Signer(const char *className, const char *sig, Ts...agv) : java::security::Identity(className, sig, std::forward<Ts>(agv)...) {}
		Signer(QJniObject obj);
		
		// Constructors
		Signer(jstring arg0);
		Signer(jstring arg0, java::security::IdentityScope arg1);
		
		// Methods
		__JniBaseClass getPrivateKey();
		void setKeyPair(java::security::KeyPair arg0);
		jstring toString();
	};
} // namespace java::security

