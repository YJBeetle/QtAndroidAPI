#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		RSAPrivateCrtKeySpec(QAndroidJniObject obj);
		// Constructors
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7);
		RSAPrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, __JniBaseClass arg8);
		RSAPrivateCrtKeySpec() = default;
		
		// Methods
		QAndroidJniObject getCrtCoefficient();
		QAndroidJniObject getPrimeExponentP();
		QAndroidJniObject getPrimeExponentQ();
		QAndroidJniObject getPrimeP();
		QAndroidJniObject getPrimeQ();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

