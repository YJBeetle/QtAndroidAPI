#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DSAPublicKeySpec(QAndroidJniObject obj);
		// Constructors
		DSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3);
		DSAPublicKeySpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
		QAndroidJniObject getY();
	};
} // namespace java::security::spec

