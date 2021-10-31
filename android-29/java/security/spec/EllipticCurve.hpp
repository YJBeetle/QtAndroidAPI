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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EllipticCurve(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		EllipticCurve(QAndroidJniObject obj);
		
		// Constructors
		EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		EllipticCurve(__JniBaseClass arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, jbyteArray arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getA();
		QAndroidJniObject getB();
		QAndroidJniObject getField();
		jbyteArray getSeed();
		jint hashCode();
	};
} // namespace java::security::spec

