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
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyAgreement(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyAgreement(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::KeyAgreement getInstance(JString arg0);
		static javax::crypto::KeyAgreement getInstance(JString arg0, JString arg1);
		static javax::crypto::KeyAgreement getInstance(JString arg0, java::security::Provider arg1);
		JObject doPhase(JObject arg0, jboolean arg1);
		JByteArray generateSecret();
		jint generateSecret(JByteArray arg0, jint arg1);
		JObject generateSecret(JString arg0);
		JString getAlgorithm();
		java::security::Provider getProvider();
		void init(JObject arg0);
		void init(JObject arg0, java::security::SecureRandom arg1);
		void init(JObject arg0, JObject arg1);
		void init(JObject arg0, JObject arg1, java::security::SecureRandom arg2);
	};
} // namespace javax::crypto

