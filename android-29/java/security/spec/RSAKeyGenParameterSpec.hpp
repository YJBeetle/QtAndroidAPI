#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAKeyGenParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject F0();
		static QAndroidJniObject F4();
		
		RSAKeyGenParameterSpec(QAndroidJniObject obj);
		// Constructors
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1);
		RSAKeyGenParameterSpec(jint arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		RSAKeyGenParameterSpec() = default;
		
		// Methods
		QAndroidJniObject getKeyParams();
		jint getKeysize();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

