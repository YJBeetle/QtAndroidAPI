#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAPrivateKeySpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DSAPrivateKeySpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DSAPrivateKeySpec(QAndroidJniObject obj);
		
		// Constructors
		DSAPrivateKeySpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2, java::math::BigInteger arg3);
		
		// Methods
		java::math::BigInteger getG();
		java::math::BigInteger getP();
		java::math::BigInteger getQ();
		java::math::BigInteger getX();
	};
} // namespace java::security::spec
