#pragma once

#include "../../../JObject.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAPublicKeySpec : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DSAPublicKeySpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DSAPublicKeySpec(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3);
		
		// Methods
		java::math::BigInteger getG() const;
		java::math::BigInteger getP() const;
		java::math::BigInteger getQ() const;
		java::math::BigInteger getY() const;
	};
} // namespace java::security::spec

