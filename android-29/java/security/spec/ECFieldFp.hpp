#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class ECFieldFp : public __JniBaseClass
	{
	public:
		// Fields
		
		ECFieldFp(QAndroidJniObject obj);
		// Constructors
		ECFieldFp(java::math::BigInteger &arg0);
		ECFieldFp() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		QAndroidJniObject getP();
		jint hashCode();
	};
} // namespace java::security::spec

