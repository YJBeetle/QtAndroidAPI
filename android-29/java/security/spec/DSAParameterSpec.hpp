#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace java::security::spec
{
	class DSAParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DSAParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DSAParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		DSAParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, java::math::BigInteger arg2);
		
		// Methods
		QAndroidJniObject getG();
		QAndroidJniObject getP();
		QAndroidJniObject getQ();
	};
} // namespace java::security::spec

