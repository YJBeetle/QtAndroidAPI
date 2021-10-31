#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class EllipticCurve : public __JniBaseClass
	{
	public:
		// Fields
		
		EllipticCurve(QAndroidJniObject obj);
		// Constructors
		EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, jbyteArray arg3);
		EllipticCurve() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getA();
		QAndroidJniObject getB();
		QAndroidJniObject getField();
		jbyteArray getSeed();
		jint hashCode();
	};
} // namespace java::security::spec

