#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		RSAPrivateKeySpec(QAndroidJniObject obj);
		// Constructors
		RSAPrivateKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1);
		RSAPrivateKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, __JniBaseClass &arg2);
		RSAPrivateKeySpec() = default;
		
		// Methods
		QAndroidJniObject getModulus();
		QAndroidJniObject getParams();
		QAndroidJniObject getPrivateExponent();
	};
} // namespace java::security::spec

