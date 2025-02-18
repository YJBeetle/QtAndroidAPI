#pragma once

#include "./RSAPrivateKeySpec.def.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPrivateCrtKeySpec : public java::security::spec::RSAPrivateKeySpec
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSAPrivateCrtKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::RSAPrivateKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		RSAPrivateCrtKeySpec(QJniObject obj) : java::security::spec::RSAPrivateKeySpec(obj) {}
		
		// Constructors
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7);
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JObject arg8);
		
		// Methods
		java::math::BigInteger getCrtCoefficient() const;
		java::math::BigInteger getPrimeExponentP() const;
		java::math::BigInteger getPrimeExponentQ() const;
		java::math::BigInteger getPrimeP() const;
		java::math::BigInteger getPrimeQ() const;
		java::math::BigInteger getPublicExponent() const;
	};
} // namespace java::security::spec

