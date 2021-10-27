#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECPoint : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject POINT_INFINITY();
		
		ECPoint(QAndroidJniObject obj);
		// Constructors
		ECPoint(java::math::BigInteger &arg0, java::math::BigInteger &arg1);
		ECPoint() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getAffineX();
		QAndroidJniObject getAffineY();
		jint hashCode();
	};
} // namespace java::security::spec

