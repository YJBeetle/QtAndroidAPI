#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RSAPublicKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAPublicKeySpec(QJniObject obj);
		
		// Constructors
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		
		// Methods
		java::math::BigInteger getModulus();
		__JniBaseClass getParams();
		java::math::BigInteger getPublicExponent();
	};
} // namespace java::security::spec

