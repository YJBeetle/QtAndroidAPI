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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAOtherPrimeInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAOtherPrimeInfo(QAndroidJniObject obj);
		
		// Constructors
		RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		java::math::BigInteger getCrtCoefficient();
		java::math::BigInteger getExponent();
		java::math::BigInteger getPrime();
	};
} // namespace java::security::spec

