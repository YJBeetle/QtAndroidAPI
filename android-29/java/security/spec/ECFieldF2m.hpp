#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECFieldF2m : public __JniBaseClass
	{
	public:
		// Fields
		
		ECFieldF2m(QAndroidJniObject obj);
		// Constructors
		ECFieldF2m(jint arg0);
		ECFieldF2m(jint arg0, jintArray arg1);
		ECFieldF2m(jint arg0, java::math::BigInteger arg1);
		ECFieldF2m() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		jint getM();
		jintArray getMidTermsOfReductionPolynomial();
		QAndroidJniObject getReductionPolynomial();
		jint hashCode();
	};
} // namespace java::security::spec

