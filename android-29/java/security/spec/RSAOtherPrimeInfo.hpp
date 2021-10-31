#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAOtherPrimeInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		RSAOtherPrimeInfo(QAndroidJniObject obj);
		// Constructors
		RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		RSAOtherPrimeInfo() = default;
		
		// Methods
		QAndroidJniObject getCrtCoefficient();
		QAndroidJniObject getExponent();
		QAndroidJniObject getPrime();
	};
} // namespace java::security::spec

