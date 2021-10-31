#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class RSAPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RSAPrivateKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		RSAPrivateKeySpec(QAndroidJniObject obj);
		
		// Constructors
		RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		RSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, __JniBaseClass arg2);
		
		// Methods
		java::math::BigInteger getModulus();
		__JniBaseClass getParams();
		java::math::BigInteger getPrivateExponent();
	};
} // namespace java::security::spec

