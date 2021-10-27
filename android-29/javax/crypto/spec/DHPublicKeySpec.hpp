#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DHPublicKeySpec(QAndroidJniObject obj);
		// Constructors
		DHPublicKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2);
		DHPublicKeySpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getY();
	};
} // namespace javax::crypto::spec

