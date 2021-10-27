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
		
		RSAPublicKeySpec(QAndroidJniObject obj);
		// Constructors
		RSAPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1);
		RSAPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, __JniBaseClass &arg2);
		RSAPublicKeySpec() = default;
		
		// Methods
		QAndroidJniObject getModulus();
		QAndroidJniObject getParams();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

