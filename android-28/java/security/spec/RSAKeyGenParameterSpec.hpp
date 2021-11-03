#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAKeyGenParameterSpec : public JObject
	{
	public:
		// Fields
		static java::math::BigInteger F0();
		static java::math::BigInteger F4();
		
		// QJniObject forward
		template<typename ...Ts> explicit RSAKeyGenParameterSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RSAKeyGenParameterSpec(QJniObject obj);
		
		// Constructors
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1);
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, JObject arg2);
		
		// Methods
		JObject getKeyParams() const;
		jint getKeysize() const;
		java::math::BigInteger getPublicExponent() const;
	};
} // namespace java::security::spec

