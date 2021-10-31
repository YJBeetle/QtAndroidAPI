#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		DHParameterSpec(QAndroidJniObject obj);
		// Constructors
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2);
		DHParameterSpec() = default;
		
		// Methods
		QAndroidJniObject getG();
		jint getL();
		QAndroidJniObject getP();
	};
} // namespace javax::crypto::spec

