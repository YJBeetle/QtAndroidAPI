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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ECFieldFp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ECFieldFp(QAndroidJniObject obj);
		
		// Constructors
		ECFieldFp(java::math::BigInteger arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getFieldSize();
		java::math::BigInteger getP();
		jint hashCode();
	};
} // namespace java::security::spec

