#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DHPrivateKeySpec(QAndroidJniObject obj);
		// Constructors
		DHPrivateKeySpec(java::math::BigInteger &arg0, java::math::BigInteger &arg1, java::math::BigInteger &arg2);
		DHPrivateKeySpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getX();
	};
} // namespace javax::crypto::spec

