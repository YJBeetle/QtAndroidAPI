#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;
namespace java::security
{
	class Provider;
}
namespace java::security
{
	class SecureRandom;
}
namespace javax::crypto
{
	class KeyGeneratorSpi;
}

namespace javax::crypto
{
	class KeyGenerator : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit KeyGenerator(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		KeyGenerator(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static javax::crypto::KeyGenerator getInstance(JString arg0);
		static javax::crypto::KeyGenerator getInstance(JString arg0, JString arg1);
		static javax::crypto::KeyGenerator getInstance(JString arg0, java::security::Provider arg1);
		JObject generateKey() const;
		JString getAlgorithm() const;
		java::security::Provider getProvider() const;
		void init(jint arg0) const;
		void init(java::security::SecureRandom arg0) const;
		void init(JObject arg0) const;
		void init(jint arg0, java::security::SecureRandom arg1) const;
		void init(JObject arg0, java::security::SecureRandom arg1) const;
	};
} // namespace javax::crypto

