#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DSAPrivateKeySpec(QAndroidJniObject obj);
		// Constructors
		DSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3);
		DSAPrivateKeySpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
		QAndroidJniObject getX();
	};
} // namespace java::security::spec

