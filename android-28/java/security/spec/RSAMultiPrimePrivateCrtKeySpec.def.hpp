#pragma once

#include "./RSAPrivateKeySpec.def.hpp"

class JArray;
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
		RSAMultiPrimePrivateCrtKeySpec(QAndroidJniObject obj) : java::security::spec::RSAPrivateKeySpec(obj) {}
		
		// Constructors
		RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JArray arg8);
		RSAMultiPrimePrivateCrtKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3, java::math::BigInteger arg4, java::math::BigInteger arg5, java::math::BigInteger arg6, java::math::BigInteger arg7, JArray arg8, JObject arg9);
		
		// Methods
		java::math::BigInteger getCrtCoefficient() const;
		JArray getOtherPrimeInfo() const;
		java::math::BigInteger getPrimeExponentP() const;
		java::math::BigInteger getPrimeExponentQ() const;
		java::math::BigInteger getPrimeP() const;
		java::math::BigInteger getPrimeQ() const;
		java::math::BigInteger getPublicExponent() const;
	};
} // namespace java::security::spec

