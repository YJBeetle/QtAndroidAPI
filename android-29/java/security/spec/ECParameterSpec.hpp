#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}
namespace java::security::spec
{
	class ECPoint;
}
namespace java::security::spec
{
	class EllipticCurve;
}

namespace java::security::spec
{
	class ECParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		ECParameterSpec(QAndroidJniObject obj);
		// Constructors
		ECParameterSpec(java::security::spec::EllipticCurve &arg0, java::security::spec::ECPoint &arg1, java::math::BigInteger &arg2, jint &arg3);
		ECParameterSpec() = default;
		
		// Methods
		jint getCofactor();
		QAndroidJniObject getCurve();
		QAndroidJniObject getGenerator();
		QAndroidJniObject getOrder();
	};
} // namespace java::security::spec

