#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPrivateKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAPrivateKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RSAPrivateKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, JObject arg2);
		
		// Methods
		java::math::BigInteger getModulus() const;
		JObject getParams() const;
		java::math::BigInteger getPrivateExponent() const;
	};
} // namespace java::security::spec

