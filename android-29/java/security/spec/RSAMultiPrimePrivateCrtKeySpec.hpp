#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./RSAPrivateKeySpec.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAMultiPrimePrivateCrtKeySpec : public java::security::spec::RSAPrivateKeySpec
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAMultiPrimePrivateCrtKeySpec(const char *className, const char *sig, Ts...agv) : java::security::spec::RSAPrivateKeySpec(className, sig, std::forward<Ts>(agv)...) {}
		RSAMultiPrimePrivateCrtKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, jarray arg8);
		RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, jarray arg8, __JniBaseClass arg9);
		
		// Methods
		QAndroidJniObject getCrtCoefficient();
		jarray getOtherPrimeInfo();
		QAndroidJniObject getPrimeExponentP();
		QAndroidJniObject getPrimeExponentQ();
		QAndroidJniObject getPrimeP();
		QAndroidJniObject getPrimeQ();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

