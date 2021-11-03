#pragma once

#include "../../JObject.hpp"

namespace java::security
{
	class Provider;
}
namespace javax::crypto
{
	class SecretKeyFactorySpi;
}

namespace javax::crypto
{
	class SecretKeyFactory : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SecretKeyFactory(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SecretKeyFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0);
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0, jstring arg1);
		static javax::crypto::SecretKeyFactory getInstance(jstring arg0, java::security::Provider arg1);
		JObject generateSecret(JObject arg0);
		jstring getAlgorithm();
		JObject getKeySpec(JObject arg0, jclass arg1);
		java::security::Provider getProvider();
		JObject translateKey(JObject arg0);
	};
} // namespace javax::crypto

