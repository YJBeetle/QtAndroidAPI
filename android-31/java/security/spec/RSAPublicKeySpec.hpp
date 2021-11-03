#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPublicKeySpec : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSAPublicKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RSAPublicKeySpec(QJniObject obj);
		
		// Constructors
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2);
		
		// Methods
		java::math::BigInteger getModulus() const;
		JObject getParams() const;
		java::math::BigInteger getPublicExponent() const;
	};
} // namespace java::security::spec

