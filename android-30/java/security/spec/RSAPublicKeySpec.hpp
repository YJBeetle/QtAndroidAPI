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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAPublicKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RSAPublicKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2);
		
		// Methods
		java::math::BigInteger getModulus();
		JObject getParams();
		java::math::BigInteger getPublicExponent();
	};
} // namespace java::security::spec

