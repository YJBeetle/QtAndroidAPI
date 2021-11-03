#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAOtherPrimeInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAOtherPrimeInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RSAOtherPrimeInfo(QAndroidJniObject obj);
		
		// Constructors
		RSAOtherPrimeInfo(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		java::math::BigInteger getCrtCoefficient() const;
		java::math::BigInteger getExponent() const;
		java::math::BigInteger getPrime() const;
	};
} // namespace java::security::spec

