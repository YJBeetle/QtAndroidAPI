#pragma once

#include "../../JObject.hpp"

class JByteArray;
class JObject;
class JString;
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class Provider_Service;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::crypto
{
	class KeyAgreementSpi;
}

namespace javax::crypto
{
	class KeyAgreement : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyAgreement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyAgreement(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::KeyAgreement getInstance(JString arg0);
		static javax::crypto::KeyAgreement getInstance(JString arg0, JString arg1);
		static javax::crypto::KeyAgreement getInstance(JString arg0, java::security::Provider arg1);
		JObject doPhase(JObject arg0, jboolean arg1) const;
		JByteArray generateSecret() const;
		jint generateSecret(JByteArray arg0, jint arg1) const;
		JObject generateSecret(JString arg0) const;
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		void init(JObject arg0) const;
		void init(JObject arg0, java::security::SecureRandom arg1) const;
		void init(JObject arg0, JObject arg1) const;
		void init(JObject arg0, JObject arg1, java::security::SecureRandom arg2) const;
	};
} // namespace javax::crypto

