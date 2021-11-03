#pragma once

#include "./RSAPrivateKeySpec.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAPrivateCrtKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::RSAPrivateKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		RSAPrivateCrtKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7);
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JObject arg8);
		
		// Methods
		java::math::BigInteger getCrtCoefficient();
		java::math::BigInteger getPrimeExponentP();
		java::math::BigInteger getPrimeExponentQ();
		java::math::BigInteger getPrimeP();
		java::math::BigInteger getPrimeQ();
		java::math::BigInteger getPublicExponent();
	};
} // namespace java::security::spec

