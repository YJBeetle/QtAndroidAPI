#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPublicKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAPublicKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAPublicKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPublicKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		
		// Methods
		QAndroidJniObject getModulus();
		QAndroidJniObject getParams();
		QAndroidJniObject getPublicExponent();
	};
} // namespace java::security::spec

