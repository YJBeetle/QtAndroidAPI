#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigInteger;
}

namespace javax::crypto::spec
{
	class DHParameterSpec : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DHParameterSpec(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DHParameterSpec(QAndroidJniObject obj);
		
		// Constructors
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1);
		DHParameterSpec(java::math::BigInteger arg0, java::math::BigInteger arg1, jint arg2);
		
		// Methods
		java::math::BigInteger getG();
		jint getL();
		java::math::BigInteger getP();
	};
} // namespace javax::crypto::spec

