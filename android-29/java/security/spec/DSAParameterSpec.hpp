#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DSAParameterSpec(QAndroidJniObject obj);
		// Constructors
		DSAParameterSpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2);
		DSAParameterSpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
	};
} // namespace java::security::spec

